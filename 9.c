#include<stdio.h>
int main(){
    int num ,i,j;
   int fact;
   float sum=0 ;

    printf("Enter the term of Factorial :");
    scanf("%d",&num);
    for(int i =1 ; i<=num ; i++){
            fact = 1 ;
            for(int j=1;j<=i;j++){
                fact = fact*j ;
            }
            sum = sum + fact ;
        }
        

    printf("Sum of Factorial = %f\n",sum);
    return 0;
}
