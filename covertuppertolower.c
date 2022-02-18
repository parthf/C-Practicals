#include<stdio.h>
void main()
{   char gender='F';
    printf("Given gender is %c\n",gender+32);
    printf("\nEnter your gender in small letter case:");
    scanf("%c",&gender);
    printf("\nEntered gender is %c",gender-32);
}
