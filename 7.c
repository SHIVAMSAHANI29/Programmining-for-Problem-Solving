#include<stdio.h>
int main(){
    int first=0 ,second = 1,third ,num;
    //Input number of term from user
    printf("Enter the number of terms:");
    scanf("%d",&num);

    //printf("Fibonacci Series = \t%d\t%d\t",first,second);
    for(int i=1;i<=num;i++){
        printf("%d",first);
        third = first + second;
        first = second;
        second = third ;
      //  printf(" %d\t",third);
    }
    printf("\n");
    return 0;
}