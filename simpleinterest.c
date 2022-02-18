#include<stdio.h>
void main()
{
float p,r,interest;
int t;
printf("Enter principal amount,rate of interest and tenure:");
scanf("%f%f%d",&p,&r,&t);
interest=(p*r*t)/100;
printf("Interest = %f",interest);
}
