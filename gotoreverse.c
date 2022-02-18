#include<stdio.h>
void main()
{   int x;
    printf("Enter the value:");
    scanf("%d",&x);
    loop:
    if(x>0)
    {  printf("%d\n",x);
       x--;
       goto loop;
    }
}
