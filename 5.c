#include<stdio.h>
int main(){
    int physics,chemistry,maths,Total_pm,Total_all;
   printf("Enter the marks of Physics :");
   scanf("%d",&physics);
   printf("Enter the marks of Physics :");
   scanf("%d",&chemistry);
   printf("Enter the marks of Physics :");
   scanf("%d",&maths);
   
   if(physics > 40 && chemistry > 50 && maths > 60 && (Total_pm > 150 || Total_all > 200)){
       printf("Candidate is eligible \n");
   }
   else {
       printf("Cndidate is not eligible \n");
   }
      return 0;
}