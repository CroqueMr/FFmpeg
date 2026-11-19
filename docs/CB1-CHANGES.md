# FFmpeg changes for LibreELEC × CB1

The official upstream is https://git.ffmpeg.org/ffmpeg.git. The RC3 source import starts at `d32b387f2b0a484599d4587d651891f0c63c4238` and finishes at `60bea7d4e6459399f94a6d1bd0036a58b824ad9a`. The LibreELEC integration selects the version used to build an image.

[Full upstream-to-CB1 Git diff](https://github.com/CroqueMr/FFmpeg/compare/d32b387f2b0a484599d4587d651891f0c63c4238...60bea7d4e6459399f94a6d1bd0036a58b824ad9a)
 · [LibreELEC × CB1 releases](https://github.com/CroqueMr/libreelec-CB1/releases) · [RC3 integration PR](https://github.com/CroqueMr/libreelec-CB1/pull/260)

The list records the historical import and maps each original patch to its Git commit. The categories below describe the imported changes. Follow-up changes have their own PRs.

The published FFmpeg 9.0 archive and the Git tag differ. The first downstream commit records the archive delta before the original LibreELEC patch series.

## DV Patch

- ffmpeg-9900-00-libavcodec__dovi_rpudec.c [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9900-00-libavcodec__dovi_rpudec.c.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/574127b0a5401a7176cf3f0d86d2bc6e6ec95af7)
- ffmpeg-9900-02-libavutil__dovi_meta.h [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9900-02-libavutil__dovi_meta.h.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/a092da4e3bf8d5f79e844a962ade9e7cd06a2bea)
- ffmpeg-9900-03-source-dovi-raw [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9900-03-source-dovi-raw.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/61c19a0ac74afd15e367844c2d011b9bdd922c26)
- ffmpeg-9900-04-ts-dovi-layer [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9900-04-ts-dovi-layer.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/e19ccd49527bd7d2f3ed6c4af7440c3a895422b3)
- ffmpeg-9900-05-matroska-dovi-association [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9900-05-matroska-dovi-association.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/14e9f87b4eb21614c871fb07dbd4796b7bbbd458)
- ffmpeg-9900-07-mov-dovi-hevc-entry [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9900-07-mov-dovi-hevc-entry.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/300ac521c8b4740f0ad96fb64a3fe71db020a633)
- ffmpeg-9900-09-dovi-aligned-padding [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9900-09-dovi-aligned-padding.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/246e44cae2b6e5db19c402ebc565f51b9bbb9ccb)

## Fix du dépôt

- 0001-postproc [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/packages/multimedia/ffmpeg/patches/postproc/0001-postproc.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/66e58ac02c90f37e580ce3b1bbab40de2f46dfea)
- 0001-libreelec [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/packages/multimedia/ffmpeg/patches/libreelec/0001-libreelec.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/3ee4ee10374aa6e85c466fc07dfcd4816b11b7a2)
- ffmpeg-9900-01-libavformat__isom_tags.c [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9900-01-libavformat__isom_tags.c.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/e111ba6520b482aaa24e93f90e1dcfc29ce0ed9b)
- ffmpeg-9900-06-hdr10plus-country [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9900-06-hdr10plus-country.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/5adff5232d5bcc2bbb23e862d68c0e3ba0f71286)
- ffmpeg-9900-06-hevc-picture-clock [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9900-06-hevc-picture-clock.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/d72d98f6b0347abc7020d230f5e42e599691b246)
- ffmpeg-9900-08-pgs-authoring [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9900-08-pgs-authoring.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/fa1d1a7a728c4817d79872b3da38af26e500d5ea)
- ffmpeg-9900-10-hevc-active-sps [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9900-10-hevc-active-sps.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/c6d23feee6e9fe9860cb7111a993062aa9e4877f)
- ffmpeg-9910-mvc [Original patch](https://github.com/CroqueMr/libreelec-CB1/blob/9e562e613c5f3c378d2143f771392b601112d49d/projects/Generic/patches/ffmpeg/ffmpeg-9910-mvc.patch) · [Imported commit](https://github.com/CroqueMr/FFmpeg/commit/60bea7d4e6459399f94a6d1bd0036a58b824ad9a)

## Component repositories

- [Kodi for CB1](https://github.com/CroqueMr/xbmc)
- [libplacebo for CB1](https://github.com/CroqueMr/libplacebo)
- [libbluray for CB1](https://github.com/CroqueMr/libbluray-cb1)
- [CB1 rendering engine](https://github.com/CroqueMr/CB1)
- [LibreELEC × CB1 integration](https://github.com/CroqueMr/libreelec-CB1)
