#ifndef ZOS_ZLIB_H_
#define ZOS_ZLIB_H_

#if 0
#if defined(__cplusplus)
extern "C" {
#endif

#include "zconf.h"

ZEXTERN int ZEXPORT __deflateInit_ascii OF((z_streamp strm, int level,
                                     const char *version, int stream_size));
ZEXTERN int ZEXPORT __inflateInit_ascii OF((z_streamp strm,
                                     const char *version, int stream_size));
ZEXTERN int ZEXPORT __deflateInit2_ascii OF((z_streamp strm, int  level, int  method,
                                      int windowBits, int memLevel,
                                      int strategy, const char *version,
                                      int stream_size));
ZEXTERN int ZEXPORT __inflateInit2_ascii OF((z_streamp strm, int  windowBits,
                                      const char *version, int stream_size));
ZEXTERN int ZEXPORT __inflateBackInit_ascii OF((z_streamp strm, int windowBits,
                                         unsigned char FAR *window,
                                         const char *version,
                                         int stream_size));

#if defined(__cplusplus)
}
#endif
#endif

#define Z_PREFIX 1

#undef z_deflateInit_
#define z_deflateInit_ __deflateInit_replaced
#undef z_inflateInit_
#define z_inflateInit_ __inflateInit_replaced
#undef z_deflateInit2_
#define z_deflateInit2_ __deflateInit2__replaced
#undef z_inflateInit2_
#define z_inflateInit2_ __inflateInit2_replaced
#undef z_inflateBackInit_
#define z_inflateBackInit_ __inflateBackInit_replaced

#include_next <zlib.h>

#undef z_deflateInit_
#undef z_inflateInit_
#undef z_deflateInit2_
#undef z_inflateInit2_
#undef z_inflateBackInit_

#if defined(__cplusplus)
extern "C" {
#endif


ZEXTERN int ZEXPORT __deflateInit_ascii OF((z_streamp strm, int level,
                                     const char *version, int stream_size));
ZEXTERN int ZEXPORT __inflateInit_ascii OF((z_streamp strm,
                                     const char *version, int stream_size));
ZEXTERN int ZEXPORT __deflateInit2_ascii OF((z_streamp strm, int  level, int  method,
                                      int windowBits, int memLevel,
                                      int strategy, const char *version,
                                      int stream_size));
ZEXTERN int ZEXPORT __inflateInit2_ascii OF((z_streamp strm, int  windowBits,
                                      const char *version, int stream_size));
ZEXTERN int ZEXPORT __inflateBackInit_ascii OF((z_streamp strm, int windowBits,
                                         unsigned char FAR *window,
                                         const char *version,
                                         int stream_size));


ZEXTERN int ZEXPORT z_deflateInit_ OF((z_streamp strm, int level,
                                     const char *version, int stream_size)) __asm("__deflateInit_ascii");
ZEXTERN int ZEXPORT z_inflateInit_ OF((z_streamp strm,
                                     const char *version, int stream_size)) __asm("__inflateInit_ascii");
ZEXTERN int ZEXPORT z_deflateInit2_ OF((z_streamp strm, int  level, int  method,
                                      int windowBits, int memLevel,
                                      int strategy, const char *version,
                                      int stream_size)) __asm("__deflateInit2_ascii");
ZEXTERN int ZEXPORT z_inflateInit2_ OF((z_streamp strm, int  windowBits,
                                      const char *version, int stream_size)) __asm("__inflateInit2_ascii");
ZEXTERN int ZEXPORT z_inflateBackInit_ OF((z_streamp strm, int windowBits,
                                         unsigned char FAR *window,
                                         const char *version,
                                         int stream_size)) __asm("__inflateBackInit_ascii");

#if defined(__cplusplus)
}
#endif

#endif
