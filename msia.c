#include "msia.h"

#include <stdlib.h>

static uint32_t sequence[] = {1, 2, 3, 95, 98, 2000, 7, 8, 10};
static size_t n_versions = sizeof(sequence) / sizeof(sequence[0]);

static int find(uint32_t x) {
    int i;
    for (i = 0; i < n_versions; ++i) {
        if (x == sequence[i]) {
            return i;
        }
    }
    return -1;
}
    
uint32_t MS_plus(uint32_t x, uint32_t y) {
    int start_idx = find(x);
    if (start_idx < 0) {
        return 0;
    }
    int stop_idx = start_idx + y;
    if (stop_idx >= n_versions) {
        return 0;
    }
    return sequence[stop_idx];
}
