#include <stdio.h>
#include "msia.h"

static print_result(uint32_t x, uint32_t y) {
    printf("%u + %u = %u\n", x, y, MS_plus(x, y));
}

int main() {
    print_result(1, 3);
    print_result(2000, 1);
    print_result(7, 2);
    print_result(3, 2);
}
