#include<stdio.h>
void main()
{   int i,j,r,x=1;
    printf("Enter row:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d",x);
        x++;
        }
    printf("\n");
    }

}
