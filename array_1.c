#include<stdio.h>
void main()
{   int marks[5],i,j;
    for(i=0;i<=4;i++)
    {
    printf("Enter marks:");
    scanf("%d",&marks[i]);
    }
    for(j=0;j<=4;j++)
    {
    printf("\nMarks are: %d", marks[j]);
    }
}
