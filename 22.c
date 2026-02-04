#include <stdio.h>
int gcd(int num1, int num2) {
    // Base case: if num2 is 0, the GCD is num1
    if (num2 == 0) {
        return num1;
    }
    // Recursive call: GCD(num1, num2) is the same as GCD(num2, num1 % num2)
    else {
        return gcd(num2, num1 % num2);
    }
}

int main() {
    int number1, number2, result;

    printf("Enter two positive integers: ");
    // Ensure the user inputs valid integers for calculation
    scanf("%d %d", &number1, &number2);
    if(number1 || number2 != 2 || number1 <= 0 || number2 <= 0) {
        printf("Invalid input. Please enter two positive integers.\n");
        return 1; 
    }

    result = gcd(number1, number2);

    printf("GCD of %d and %d is %d\n", number1, number2, result);

    return 0;
}
