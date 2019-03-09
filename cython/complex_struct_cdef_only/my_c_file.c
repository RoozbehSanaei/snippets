#include <stdint.h>

typedef struct _my_struct_t {
    uint32_t a;
    uint32_t * b;
    uint32_t * c;
    struct {
        uint32_t x;
        uint32_t y;
    } value;
} _my_struct_t;