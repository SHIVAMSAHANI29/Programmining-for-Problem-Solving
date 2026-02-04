#include<stdio.h>
int sumofdigits(int n);
int main(){
    int num;
    printf("enter a positive number :");
    scanf("%d",&num);
      
      int result = sumofdigits(num);
      printf("Sum of odd digits = %d\n",result);
      return 0;

}
int sumofdigits(int n){
    int sum =0,digit;
    while(n>0){
        digit = n%10 ;
        if(digit % 2 == 1)
        sum = sum + digit ;
        n = n / 10 ;
    }
    return sum;
}