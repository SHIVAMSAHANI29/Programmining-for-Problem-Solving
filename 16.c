#include<stdio.h>
int AreaofRectangle(int l, int b);
int main(){
    float l,b;
     printf("Enter the both side of rectangle:");
  scanf("%f %f",&l,&b);
  AreaofRectangle(l,b);
    return 0;
}
int AreaofRectangle(int l, int b){
  int area;
   area =  l*b ;
  printf("Area of Rectangle = %d\n",area);
  return area;

}