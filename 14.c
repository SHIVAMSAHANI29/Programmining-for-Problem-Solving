#include<stdio.h>
int main(){
    int d1,d2,d3,d4,d5,num;
    printf("Enter a five digit number :");
    scanf("%d",&num);
    
     d1 =(num/10000);
     d2 =(num/1000)%10 ;
     d3 =(num/100)%10 ;
     d4 =(num/10)%10 ;
     d5 = num%10 ; 
    printf("a.%d\n",d1);
    printf("b.%d\n",d2);
    printf("c.%d\n",d3);
    printf("d.%d\n",d4);
    printf("e.%d\n",d5) ;
    return 0;
}