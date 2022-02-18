#include<stdio.h>
void main()
{
float l,b,r,area_c,area_r;
printf("Enter the length of the rectangle :");
scanf("%f",&l);
printf("Enter the breadth of the rectangle :");
scanf("%f",&b);
printf("Enter the radius of the circle :");
scanf("%f",&r);
area_r=l*b;
area_c=3.14*r*r;
printf("Area of rectangle with length %f and breadth %f is %f",l,b,area_r);
printf("Area of circle with radius %f is %f",r,area_c);
}
