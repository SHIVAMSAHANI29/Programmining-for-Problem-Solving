#include<stdio.h>
int Factorial(int num);
int main(){
    int n;
    float sum =0;
    printf("Enter the number of Term :");
    scanf("%d",&n);
    for(int j = 1; j<=n ;j++){
    sum = sum + Factorial(j);
    }
    printf("Sum of factorial = %f\n",sum);
    return 0;

}
int Factorial(int num){
      int fact = 1;
      for(int i=1; i<=num;i++){
          fact *= i;
      }
      return fact;
}