#if defined(__x86_64__)
#include "ffi64.c"
#elif defined(__i386__)
#include "ffi.c"
#endif
