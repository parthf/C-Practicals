#include<stdio.h>
void main()
{
int x,y,ans;
printf("Enter the first number :");
scanf("%d",&x);
printf("Enter the second number :");
scanf("%d",&y);
ans = x*y;
printf("\nProduct of %d and %d = %d",x,y, ans);
ans = x+y;
printf("\nSum of %d and %d = %d",x,y, ans);
ans = x-y;
printf("\nSubtraction of %d and %d = %d",x,y, ans);
ans = x/y;
printf("\nDivision of %d and %d = %d",x,y, ans);

}
