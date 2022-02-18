#include<stdio.h>
void main()
{   int n=5,i,j,x,y;
    x=n;
    y=n;
    for(i=1;i<=n;i++)
    {   for(j=1;j<n*2;j++)
        {   if(j>x&&j<y)
            printf("*");
            else
            printf(" ");
        }
    x--;
    y++;
    printf("\n");
    }
}
