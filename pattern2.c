#include<stdio.h>
void main()
{   int i,j,r;
    printf("Enter row:");
    scanf("%d",&r);//4
    for(i=1;i<=r;i++)//i=4--4<=4--yes
    {
        for(j=r;j>=i;j--)//j=3--3>=4--no
        {
        printf("*");//****---***---**--*
        }
    printf("\n");
    }

}
