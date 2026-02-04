#include<stdio.h>
 int Fibonacci(int num);
   int main(){
       int n,total_sum;
       printf("Enter the number of term :");
       scanf("%d",&n);
       if(n<0){
           printf("Number of term should be a non - negative integer \n");
       }

       total_sum = Fibonacci(n);
       printf("Sum of %d term of Fibonacci Series = %d\n",n,total_sum);
       return 0;
   }
   int  Fibonacci(int num){
       int first=0 , second=1,third,sum=0;
       if(num<=0)
       return 0;

       for(int i=0 ; i<num  ; i++){
           sum = sum + first;
           third = first + second ;
           first = second;
           second = third;
       }
       
       return sum ;
   }
// #include <stdio.h>
// // Function to calculate the sum of the Fibonacci series up to n terms
// int sum_fibonacci(int n) {
//     if (n <= 0) {
//         return 0;
//     }
//     int first = 0, second = 1, next, sum = 0;
//     for (int i = 0; i < n; i++) {
//         // Add current 'first' number to the total sum
//         sum += first;
//         // Calculate the next number in the sequence
//         next = first + second;
//          // Update 'first' and 'second' for the next iteration
//         first = second;
//         second = next;
//     }
// return sum;
// }

// int main() {
//     int n, total_sum;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//      if (n < 0) {
//         printf("Number of terms should be a non-negative integer.\n");
//     } else {
//         total_sum = sum_fibonacci(n);
//         printf("Sum of the first %d terms of the Fibonacci series is: %d\n", n, total_sum);
//     }

//     return 0;
// }
