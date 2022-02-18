#include<stdio.h>
#include<math.h>
void main()
{   int n,m,t,a;
    printf("Enter the number:");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {   m=n%10;
        a=a+pow(m,3);
        n=n/10;
    }
    if(t==a)
    printf("%d is Armstrong",t);
    else
    printf("%d is Not Armstrong",t);
}
