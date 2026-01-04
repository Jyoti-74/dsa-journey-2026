#include <stdio.h>

double fToC(double F) {
    return (F - 32) * 5.0 / 9.0;
}

int main(void) {
    double F = 98.6;
    double C = fToC(F);

    printf("Fahrenheit: %.2f\n", F);
    printf("Celsius: %.2f\n", C);

    return 0;
}
