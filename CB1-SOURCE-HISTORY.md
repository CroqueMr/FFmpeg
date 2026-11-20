# FFmpeg source history

[Original source](https://github.com/FFmpeg/FFmpeg) · [Image and releases](https://github.com/CroqueMr/libreelec-CB1)

The tables record historical source deltas, original evidence, and category. LibreELEC selects tested source commits through its recipes.
Early rebases and inconsistent surviving patch stacks can leave intermediate snapshots unverified.

## Related repositories

- [libreelec-CB1](https://github.com/CroqueMr/libreelec-CB1)
- [xbmc](https://github.com/CroqueMr/xbmc)
- [CB1](https://github.com/CroqueMr/CB1)
- [libplacebo](https://github.com/CroqueMr/libplacebo)
- [libbluray-cb1](https://github.com/CroqueMr/libbluray-cb1)
- [linux](https://github.com/CroqueMr/linux)
- [open-gpu-kernel-modules](https://github.com/CroqueMr/open-gpu-kernel-modules)
- [egl-gbm](https://github.com/CroqueMr/egl-gbm)

## Merged source pull requests

| Change | Category | Source commit | History branch |
|---|---|---|---|
| [Record the exact FFmpeg 9.0 archive used by Generic LibreELEC](https://github.com/CroqueMr/FFmpeg/pull/3) | Upstream Fix | 8cb60995fa4f | codex/1.1-history |
| [Preserve extended Dolby Vision RPU fields](https://github.com/CroqueMr/FFmpeg/pull/4) | DV Patch | 28b11442aac8 | codex/1.1-history |
| [Recognize AV1 Dolby Vision sample entries](https://github.com/CroqueMr/FFmpeg/pull/5) | DV Patch | 1533352faf1a | codex/1.1-history |
| [Expose extended Dolby Vision metadata to the player](https://github.com/CroqueMr/FFmpeg/pull/6) | DV Patch | c456744b6fee | codex/1.1-history |
| [Restore the Beta 1 FFmpeg layer integration](https://github.com/CroqueMr/FFmpeg/pull/7) | DV Patch | 9fc6028a12ee | codex/1.1-history |
| [Preserve HEVC startup timing and honor the declared MOV enhancement track](https://github.com/CroqueMr/FFmpeg/pull/8) | DV Patch | e575e16ee9f6 | codex/1.1-history |
| [Handle split HEVC clocks and reject ambiguous Dolby Vision track references](https://github.com/CroqueMr/FFmpeg/pull/9) | DV Patch | e2b9fde51b5f | codex/1.1-history |
| [Restore the RC1 MOV dependency and startup behavior](https://github.com/CroqueMr/FFmpeg/pull/10) | DV Patch | 2dd89c7e21ac | codex/1.1-history |
| [Restore the RC2 demux and MVC source checkpoint](https://github.com/CroqueMr/FFmpeg/pull/11) | DV Patch | a3464e5d7b25 | codex/1.1-history |
| [Retain exact Matroska layer identity through the RC4 changes](https://github.com/CroqueMr/FFmpeg/pull/12) | DV Patch | de0af7644009 | codex/1.1-history |
| [Seek declared MOV layer peers on the presentation clock](https://github.com/CroqueMr/FFmpeg/pull/13) | DV Patch | f0b04a2da980 | codex/1.1-history |
| [Backport aligned Dolby Vision RPU handling](https://github.com/CroqueMr/FFmpeg/pull/14) | DV Patch | 6f252a4a3ef8 | codex/1.1-history |
| [Preserve decoder surfaces for repeated active HEVC SPS](https://github.com/CroqueMr/FFmpeg/pull/15) | Upstream Fix | cf643164b3bd | codex/1.1-history |

## ffmpeg source checkpoints

| Release | Published integration source | Recovered source tree |
|---|---|---|
| v0.1.0-rc1 | [482de3b6d434](https://github.com/CroqueMr/libreelec-CB1/commit/482de3b6d43497eaed9db293d7cf54efd342ca80) | 261daadcde2990b89e28d1f7d55bf283a9b07ca2 |
| v0.1.0-rc1-opt1 | [d5976b3338ea](https://github.com/CroqueMr/libreelec-CB1/commit/d5976b3338ea7999e8dc8522251043d7cefb75d6) | 261daadcde2990b89e28d1f7d55bf283a9b07ca2 |
| v0.1.0-rc1-opt1-diag1 | [73d61bf60e7d](https://github.com/CroqueMr/libreelec-CB1/commit/73d61bf60e7d848efcc6d3653e6ac9e84acdbc38) | 261daadcde2990b89e28d1f7d55bf283a9b07ca2 |
| R0.1.0-rc2-opt1 | [1b3146f8d69a](https://github.com/CroqueMr/libreelec-CB1/commit/1b3146f8d69a036128f15c85a4bb7b2773a3524c) | 261daadcde2990b89e28d1f7d55bf283a9b07ca2 |
| R0.2.1-opt1 | [e40764f390a4](https://github.com/CroqueMr/libreelec-CB1/commit/e40764f390a4398de35cc7134cdd30d224f33bb0) | 261daadcde2990b89e28d1f7d55bf283a9b07ca2 |
| R0.2.1a-opt1 | [68383affb3d5](https://github.com/CroqueMr/libreelec-CB1/commit/68383affb3d5535dac0446106d1fe44cf58eeaa4) | 261daadcde2990b89e28d1f7d55bf283a9b07ca2 |
| R0.3.0 | [d852be418216](https://github.com/CroqueMr/libreelec-CB1/commit/d852be4182167580d8cdab48d90d9ef9150ed555) | 261daadcde2990b89e28d1f7d55bf283a9b07ca2 |
| R1.0.0-Beta1 | [d14b473ea117](https://github.com/CroqueMr/libreelec-CB1/commit/d14b473ea117b097fb7f2810318bf2177056b41d) | 82ad2d26e6e677e19999b402d96578b763eba326 |
| R1.0.0-Beta2 | [e496c862af5b](https://github.com/CroqueMr/libreelec-CB1/commit/e496c862af5b58c6cd9185cec3947f2e96ffea91) | 82ad2d26e6e677e19999b402d96578b763eba326 |
| R1.0.0-Beta3 | [e496c862af5b](https://github.com/CroqueMr/libreelec-CB1/commit/e496c862af5b58c6cd9185cec3947f2e96ffea91) | 82ad2d26e6e677e19999b402d96578b763eba326 |
| R1.0.0-Beta4 | [64c22141cf84](https://github.com/CroqueMr/libreelec-CB1/commit/64c22141cf84f98efbf1c7df64cfbe1812e7f477) | 82ad2d26e6e677e19999b402d96578b763eba326 |
| R1.0.0-Beta4-debug | [50c49f02456b](https://github.com/CroqueMr/libreelec-CB1/commit/50c49f02456b25da315e61d4696425a18d40f2bc) | 82ad2d26e6e677e19999b402d96578b763eba326 |
| R1.0.0-Beta5 | [e029707626d1](https://github.com/CroqueMr/libreelec-CB1/commit/e029707626d1854ec7eeecda1a4282f9b105b49d) | 82ad2d26e6e677e19999b402d96578b763eba326 |
| R1.0.0-Beta5-debug | [e029707626d1](https://github.com/CroqueMr/libreelec-CB1/commit/e029707626d1854ec7eeecda1a4282f9b105b49d) | 82ad2d26e6e677e19999b402d96578b763eba326 |
| R1.0.0-RC1 | [a5800b6e981b](https://github.com/CroqueMr/libreelec-CB1/commit/a5800b6e981b2f847d36e6311f80948217b9b178) | 079ffcd4dc04df1e0df55de63360c42771a6998a |
| R1.0.0-RC1.1 | [47ccdcf3a2aa](https://github.com/CroqueMr/libreelec-CB1/commit/47ccdcf3a2aaeb74faf7e38a0ececa731d57709a) | 079ffcd4dc04df1e0df55de63360c42771a6998a |
| R1.0.0-RC1.1-Debug | [c7510d53f26f](https://github.com/CroqueMr/libreelec-CB1/commit/c7510d53f26fde56c79d14b2929aa8613ecfba89) | 079ffcd4dc04df1e0df55de63360c42771a6998a |
| untagged-27906d2c4291ba113414 | [0069b5cf7e6f](https://github.com/CroqueMr/libreelec-CB1/commit/0069b5cf7e6fd23aa7f6e7cbcbcc59fc20420f96) | 26fdabc7f4b1c654b3f923c90de2874acdd18fe7 |
| R1.0.0-RC3-Preview | [aad993eb10cf](https://github.com/CroqueMr/libreelec-CB1/commit/aad993eb10cf9eb93ff4a3f1eabb22db90b4fdff) | 26fdabc7f4b1c654b3f923c90de2874acdd18fe7 |
| R1.0.0-RC3 | [80a9ab2d6218](https://github.com/CroqueMr/libreelec-CB1/commit/80a9ab2d6218e0e83fb8e0ee4127bd5c60eced26) | 67d70b975372fdc3b2fb28ac3abb8efae9249627 |
| R1.0.0-RC4-Preview | [f630d2e9eaab](https://github.com/CroqueMr/libreelec-CB1/commit/f630d2e9eaabc3b83d27621b64af044e7a316f4d) | 67d70b975372fdc3b2fb28ac3abb8efae9249627 |
| candidate/dv-r1.0.0-f8075f0b | [f8075f0b7552](https://github.com/CroqueMr/libreelec-CB1/commit/f8075f0b755233ee73a613eb4be73f72ebc65244) | 4d7a4a1bafc36fdcc1840e8a7819d23a914abac1 |
| R1.0.0 | [e46aca8a03eb](https://github.com/CroqueMr/libreelec-CB1/commit/e46aca8a03eba080950e029d09762a2a040bac61) | 4d7a4a1bafc36fdcc1840e8a7819d23a914abac1 |
| R1.0.1-RC1 | [7f3e4b260cf8](https://github.com/CroqueMr/libreelec-CB1/commit/7f3e4b260cf8a32170accd2cc6451b18142b2011) | c0a000fc6989b6b5efd5295322a3ba36821f103a |
| R1.0.1-RC2 | [22c88f0ac18e](https://github.com/CroqueMr/libreelec-CB1/commit/22c88f0ac18e46cec7b8ceaaf10b614ee845d928) | c0a000fc6989b6b5efd5295322a3ba36821f103a |

## Upstream preparation

Propose general correctness fixes and performance improvements against the owning project. Separate Dolby Vision policy from generic API changes and retain the original attribution.
See the linked PRs for their DV Patch, Upstream Fix or Performance Improvement category.
