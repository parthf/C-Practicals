#include<stdio.h>
void main()
{   int arr1[3][3],arr2[3][3],sum[3][3],i,j;
    printf("Enter the elements for array 1:");
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        scanf("%d",&arr1[i][j]);
    }
    printf("Enter the elements for array 2:");
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        scanf("%d",&arr2[i][j]);
    }
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        sum[i][j]=arr1[i][j]+arr2[i][j];
    }
    printf("Sum array:\n");
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        { printf("%d ",sum[i][j]); }
        printf("\n");
    }


}
