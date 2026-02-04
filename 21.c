#include <stdio.h>

/* Function prototype for the recursive sum function */
int sum_of_digits(int n);

int main() {
    int number, sum;
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);
    if (number < 10000 || number > 99999) {
        printf("Invalid input. Please enter a valid 5-digit number.\n");
        return 1; // Exit with an error code
    }

    sum = sum_of_digits(number);
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
int sum_of_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10 + sum_of_digits(n / 10));
}
