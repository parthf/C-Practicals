#include<stdio.h>
void main()
{   int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    if(a>b && a>c)
        printf("a = %d is greater",a);
    else if(b>c)
        printf("b = %d is greater",b);
    else
        printf("c = %d is greater",c);
}
