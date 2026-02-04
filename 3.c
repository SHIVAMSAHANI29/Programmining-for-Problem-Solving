#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,discriminant;
    float root1,root2,realPart,imagPart;
    printf("Enter Cofficient a,b,c ;");
    scanf("%d %d %d ",&a,&b,&c);
    //calculation 
    discriminant = b*b-4*a*c;
    if(discriminant > 0){
        root1 = -b + sqrt(discriminant)/2*a ;
        root2 = -b - sqrt(discriminant)/2*a ;
        printf("Roots are real and different \n");
        printf("Root1 = %f\t Root2 = %f\n",root1,root2);
    }
    else if(discriminant == 0){
        root1 = root2 = -b / 2*a ;
        printf("Roots are real and equal \n");
        printf("Root1 = Root2 = %f\n",root1);
    }
    else{
        realPart = -b / 2*a ;
        imagPart = sqrt(discriminant)/2*a ;
        printf("Roots are complex and different \n");
        printf("Root1 = %f + %f\n",realPart,imagPart);
        printf("Root2 = %f - %f\n",realPart,imagPart);
    }
    return 0;
}