#include <stdio.h>

int main() {
    long long decimal_num, temp_decimal_num;
    int binary_num[64]; // Array to store binary digits, size adjusted for long long
    int i = 0, j;

    printf("Enter a decimal number: ");
    // Use long long format specifier for larger numbers
    scanf("%lld", &decimal_num);
    //temp_decimal_num = decimal_num;

    // Handle the case where the input is 0 separately
    if (decimal_num == 0) {
        printf("Binary equivalent of 0 is 0\n");
        return 0;
    }

    // Loop to convert decimal to binary
    while (decimal_num > 0) {
        binary_num[i] = decimal_num % 2;
        decimal_num = decimal_num / 2;
        i++;
    }

    // Print the binary number in reverse order
    printf("Binary equivalent : ");
    for (j = i - 1; j >= 0; j--) {
        printf("%f", binary_num[j]);
    }
    printf("\n");

    return 0;
}
