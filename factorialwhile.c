#include<stdio.h>
void main()
{   int x,fact=1,i;
    printf("Enter the value:");
    scanf("%d",&x);
    for(i=x;i>=1;i--)
        fact=fact*i;
    printf("Factorial=%d",fact);
}
