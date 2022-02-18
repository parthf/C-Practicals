#include<stdio.h>
void main()
{   int i,j,r,c;
    printf("Enter row:");
    scanf("%d",&r);
    printf("Enter column:");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
        printf("%d",i);
        }
    printf("\n");
    }

}
