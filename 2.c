#include<stdio.h>
int main(){
   float BS,DA,HRA,PF,GROSS,NET;
   printf("Enter the basic salary of the employee :");
   scanf("%f",BS);
   // Calulation
   DA = 0.25*BS;
   HRA = .15*BS ;
   PF = .10*BS;
   GROSS = BS+DA+HRA ;
   NET = GROSS - PF ;

   printf("\n--Salary Slip--\n");
   printf("Basic salary = %f\n",BS);
   printf("Dearness Allowance = %f\n",DA);
   printf("House rent aloow = %f\n",HRA);
   printf("Provident Fund = %f\n",PF);
   printf("Gross Salary = %f\n",GROSS);
   printf("Net salary = %f\n",NET);

          return 0;
}