#include<stdio.h>
#include<math.h>
 int main(){
     int i,n;
     float x, sum = 1 ,term,fact;
     printf("Enter the value of x and n :");
     scanf("%f %d",&x,&n);

     for( i =1 ; i<=n ;i++){
         fact =1 ;
         for(int j = 1; j<=i ; j++){
             fact = fact * j;
         }
     

     term = pow(x,i)/fact;
     // for even and odd
     if(i%2==0)
     sum = sum + term ;
     else 
     sum = sum - term ;
     }
     printf("Sum of alternate series = %f\n",sum);
      
      return 0;
 }
 