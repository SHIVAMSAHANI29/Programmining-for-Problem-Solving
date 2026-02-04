#include<stdio.h>
int main(){
    int num,temp,rem,sum;
    printf("Armstrong number between 100 and 500 are .\n");
    for( num=100 ; num<=500 ;num++){
        temp =num;
        sum = 0;
        while(temp != 0){
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
        }
        if(sum==num){
            printf("%d\n",num);
        }
    }
    return 0;
}