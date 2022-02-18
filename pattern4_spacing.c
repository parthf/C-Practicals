#include<stdio.h>
void main()
{   int i,j,k,n;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
        printf(" ");
        }
         for(k=i;k>=1;k--)
        {
        printf("*");
        }
    printf("\n");
    }

}
