#include<stdio.h>
void main()
{   int n,num,digit,rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    n=num;
    while(num>0)
    {   digit=num%10;
        num=num/10;
        rev=rev*10+digit;
    }
    if(rev==n)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}

