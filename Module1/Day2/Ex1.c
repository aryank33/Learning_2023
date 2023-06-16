#include <stdio.h>
#include <stdint.h>

void printExponent(double number) {
    uint64_t* ptr = (uint64_t*)&number;
    uint64_t exponent = (*ptr >> 52) & 0x7FF;

    printf("Exponent (Hex): 0x%llX\n", exponent);
    printf("Exponent (Binary): ");
    for (int i = 11; i >= 0; i--) {
        uint64_t bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double number;

    printf("Enter a double number: ");
    scanf("%lf", &number);

    printExponent(number);

    return 0;
}
