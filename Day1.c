#include <stdio.h>

struct Solution {
    int (*absolute)(int);
};

int absolute_impl(int n) {
    return (n < 0) ? -n : n;
}

int main(void) {
    struct Solution sol;
    sol.absolute = absolute_impl;

    int n = -15;
    printf("Absolute value: %d\n", sol.absolute(n));

    return 0;
}
