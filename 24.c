#include <stdio.h>
#include <math.h>

/**
 * Function to convert a binary number (represented as an integer) to decimal.
 * The input should only contain 0s and 1s.
 */
long long convertBinaryToDecimal(long long n) {
    long long decimalNumber = 0;
    long long remainder;
    int i = 0;

    // Iterate through each digit of the binary number
    while (n != 0) {
        remainder = n % 10;        // Get the last digit
        n /= 10;                   // Remove the last digit
        // Add the digit's value to the decimal number.
        // The value is the digit multiplied by 2 raised to the power of its position (i).
        decimalNumber += remainder * pow(2, i);
        ++i;                       // Move to the next position
    }

    return decimalNumber;
}

int main() {
    long long binaryNumber;

    // Prompt the user for input
    printf("Enter a binary number: ");
    // Use %lld for long long input
    scanf("%lld", &binaryNumber);

    // Call the conversion function and print the result
    printf("%lld in binary = %lld in decimal\n", binaryNumber, convertBinaryToDecimal(binaryNumber));

    return 0;
}
