#include<stdio.h>
int Factorial(int num);
 int main(){
     int num;
     printf("Enter the number of term :");
     scanf("%d",&num);
     Factorial(num);
     return 0;
 }
  int Factorial(int num){
      int fact = 1;
      for(int i=1; i<=num;i++){
          fact *= i;
      }
      printf("Factorial of %d = %d\n",num,fact);
      return fact;
  }