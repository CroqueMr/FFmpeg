/*
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include <stdio.h>
#include <string.h>

#include "libavutil/adler32.h"
#include "libavutil/macros.h"
#include "libavcodec/avcodec.h"

/* One 32x32 IDR ramp, with the default and a custom intra 32x32 matrix. */
static const uint8_t vps[] = {
    0, 0, 1, 0x40, 0x01, 0x0c, 0x01, 0xff, 0xff, 0x04, 0x08, 0x00, 0x00,
    0x03, 0x00, 0x9f, 0xa8, 0x00, 0x00, 0x03, 0x00, 0x00, 0x1e, 0xba, 0x02,
    0x40, 0, 0, 1,
};
static const uint8_t sps[] = {
    0x42, 0x01, 0x01, 0x04, 0x08, 0x00, 0x00, 0x03, 0x00, 0x9f, 0xa8, 0x00,
    0x00, 0x03, 0x00, 0x00, 0x1e, 0xa0, 0x42, 0x08, 0x59, 0x6e, 0xae, 0x4e,
    0x57, 0x80, 0xb4, 0x04, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x03,
    0x00, 0x64, 0x20,
};
static const uint8_t custom_sps[] = {
    0x42, 0x01, 0x01, 0x04, 0x08, 0x00, 0x00, 0x03, 0x00, 0x9f, 0xa8, 0x00,
    0x00, 0x03, 0x00, 0x00, 0x1e, 0xa0, 0x42, 0x08, 0x59, 0x6e, 0xae, 0x4f,
    0x55, 0x55, 0x55, 0x55, 0x58, 0x15, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd5, 0x78, 0x0b, 0x40, 0x40, 0x00, 0x00, 0x03, 0x00, 0x40,
    0x00, 0x00, 0x06, 0x42,
};
static const uint8_t pps_idr[] = {
    0, 0, 1, 0x44, 0x01, 0xc1, 0x71, 0x81, 0x12,
    0, 0, 1, 0x28, 0x01, 0xaf, 0x13, 0x80, 0xf7, 0xb0, 0xe5, 0x2b, 0x0b,
    0xfc, 0x67, 0xad, 0x8d, 0x81, 0x69, 0xfa, 0x15, 0x8b, 0xc0,
};

static int format_calls;

static enum AVPixelFormat get_format(AVCodecContext *ctx, const enum AVPixelFormat *fmts)
{
    format_calls++;
    return AV_PIX_FMT_YUV420P;
}

int main(void)
{
    const AVCodec *hevc = avcodec_find_decoder(AV_CODEC_ID_HEVC);
    AVCodecContext *ctx = avcodec_alloc_context3(hevc);
    AVFrame *frame = av_frame_alloc();
    AVPacket *pkt = av_packet_alloc();
    int ret = 1;
    static const struct {
        const uint8_t *sps;
        int size, offset, mask, calls;
        AVAdler luma;
    } pictures[] = {
        { sps,        sizeof(sps),         0, 0,    1, 0xdf25f80f },
        { custom_sps, sizeof(custom_sps),  0, 0,    1, 0x678eef8f },
        { sps,        sizeof(sps),         0, 0,    1, 0xdf25f80f },
        { sps,        sizeof(sps),        24, 0x02, 2, 0xdf25f80f }, /* strong_intra_smoothing */
        { custom_sps, sizeof(custom_sps),  0, 0,    3, 0x678eef8f },
        { sps,        sizeof(sps),        21, 0x04, 4, 0xdf25f80f }, /* max_dec_pic_buffering */
    };

    if (!hevc || !ctx || !frame || !pkt)
        goto end;
    ctx->get_format = get_format;
    ctx->thread_count = 1;
    if (avcodec_open2(ctx, hevc, NULL) < 0)
        goto end;
    for (int i = 0; i < FF_ARRAY_ELEMS(pictures); i++) {
        int size = pictures[i].size;
        AVAdler luma = 0;
        if (av_new_packet(pkt, sizeof(vps) + size + sizeof(pps_idr)) < 0)
            goto end;
        memcpy(pkt->data, vps, sizeof(vps));
        memcpy(pkt->data + sizeof(vps), pictures[i].sps, size);
        pkt->data[sizeof(vps) + pictures[i].offset] ^= pictures[i].mask;
        memcpy(pkt->data + sizeof(vps) + size, pps_idr, sizeof(pps_idr));
        if (avcodec_send_packet(ctx, pkt) < 0 || avcodec_receive_frame(ctx, frame) < 0)
            goto end;
        for (int y = 0; y < frame->height; y++)
            luma = av_adler32_update(luma, frame->data[0] + frame->linesize[0] * y, frame->width);
        if (luma != pictures[i].luma || format_calls != pictures[i].calls) {
            fprintf(stderr, "Picture %d: luma %08x, %d format calls\n", i, luma, format_calls);
            goto end;
        }
        av_packet_unref(pkt);
        av_frame_unref(frame);
    }
    ret = 0;
end:
    avcodec_free_context(&ctx);
    av_frame_free(&frame);
    av_packet_free(&pkt);
    return ret;
}
