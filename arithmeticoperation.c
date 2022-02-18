#include<stdio.h>

void main()
{
    float a,b,sub,add,prod,div,rem;

    printf("Enter the value for a :");
    scanf("%f",&a);
    printf("\nEnter the value for b :");
    scanf("%f",&b);
    add=a+b;
    sub=a-b;
    prod=a*b;
    div=a/b;
    rem=(int)a%(int)b;
    printf("\nAddition of a and b is  %f", add);
    printf("\nSubtraction of a and b is %f", sub);
    printf("\nMultiplication of a and b is %f", prod);
    printf("\nDivision of a and b is %f", div);
    printf("\nRemainder of a and b is %f", rem);

}
