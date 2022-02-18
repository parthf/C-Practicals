#include<stdio.h>//mirrored triangle with number
void main()
{
   int i,j,k,n,m=1;
   printf("Enter limit:");
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
      for(j=1;j<=i-1;j++)
      {
         printf(" ");
      }
      for(k=1;k<=m;k++)
      {
          printf("%d",k);
      }
      printf("\n");
      m++;
   }
}
