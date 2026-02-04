// #include<stdio.h>
// int main(){
//     int number , remainder ,reversed  =0,original ;
    
//     printf("Enter a number :");
//     scanf("%d",&number);
//     original = number;
//     while(number!=0){
//         remainder = number%10 ;
//         reversed = reversed*10 + remainder;
//         number  = number/10;
        
//     }
    
//     // printf("reverse of %d = %d\n",number,reversed);
//     if(original==reversed){
//     printf("%d is a Palindrome\n",original);
//     }
//     else
//     printf("%d is not a Palindrome\n",original);
//     return 0;
// }

// int main(){
//     int num , fact=1 ,sum = 0 ;
//     printf("Enter the term of Factorial :");
//     scanf("%d",&num);
//     for(int i =1 ; i<=num ; i++){
//         fact = fact*i ;
//     }
//     printf("Factorial of %d = %d\n",num,fact);
//     return 0;
// }


#include<stdio.h>
// int main(){
//     int i,j, num,count;
//      printf("Prime Number between 1 to 300 ");
//     if(num<=1)
//     return 0;
//     for( i=2 ; i<=300 ;i++){
//          count = 1;
//      for( j=1 ; j<=i%2 ;j++){
//          count= 0;
//          break;
//      }
//     }
//     if(count == 1){
//         printf("%d",i);
//     }
//     printf("\n");
// return 0;
// }
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





