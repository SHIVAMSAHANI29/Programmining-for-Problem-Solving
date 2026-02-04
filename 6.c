#include<stdio.h>
int main(){
     int n,y,x,b,a;
     printf("Enter the value of n(1 to 4),a,x,b :");
     scanf("%d %d %d %d",&n,&a,&x,&b);

     if(n==1){
         y = a*x%b ;
     }
     else if(n==2){
         y = a*x*x+b*b ;
     }
     else if(n==3){
         y = a-b*x ;
     }
     else if(n==4){
         y = a+x/b ;
     }
     else{
         printf("Invalid input ");
     }
    printf("Value of Y = %d\n",y);
       return 0;
}