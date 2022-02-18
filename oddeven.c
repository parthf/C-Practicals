#include<stdio.h>
void main()
{   int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("Entered number is even");
    else
        printf("Entered number is odd");
}
