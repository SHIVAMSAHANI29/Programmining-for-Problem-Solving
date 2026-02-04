#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("Prime numbers between 1 and 300 are:\n");

    // Loop through numbers from 2 to 300
    for (i = 2; i <= 300; i++) {
        isPrime = 1; // Assume the current number is prime
        for (j = 2;  j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;       // No need to check further, move to the next number
            }
        }
       // If isPrime is still 1, the number is prime
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}






