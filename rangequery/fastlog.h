#include <stdint.h>
static inline uint32_t fast_log2(const uint32_t input) {
    // if we have the clz instruction then we can just do this in one
    // instruction.
#ifdef __builtin_clz
    return __builtin_clz(input);
#endif
    int bound = 0;
    uint32_t tmp_input = input;
    while (tmp_input >>= 1) ++bound;
    return bound;
}
