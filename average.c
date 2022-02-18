#include<stdio.h>
void main()
{
float v,w,x,y,z,avg;
printf("Enter the first number :");
scanf("%f",&v);
printf("Enter the second number :");
scanf("%f",&w);
printf("Enter the third number :");
scanf("%f",&x);
printf("Enter the fourth number :");
scanf("%f",&y);
printf("Enter the fifth number :");
scanf("%f",&z);
avg = (v+w+x+y+z)/5.0;
printf("\nAverage of %f,%f,%f,%f and %f = %f" ,v,w,x,y,z,avg);
}
