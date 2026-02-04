#include<stdio.h>

int main(){
    int num,temp,remainder,digits = 0,sum = 0,power,i;
    printf("Enter a number :");
    scanf("%d",&num);
    temp = num ;
    while(temp != 0){
        digits ++;
        temp /= 10 ;
    }
    temp = num ;
    while(temp !=0){
        remainder = temp % 10;
        power = 1;
        for(i=1;i<=digits;i++){
            power = power + remainder;
        }
        sum = sum + power;
        temp /= 10;
    }
    if(sum == num){
        printf("%d is an Armstrong Number \n",num);
    }
    else{
        printf("%d is not an Armstrong Number \n",num);
    }
    return 0;
}