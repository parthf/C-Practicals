#include<stdio.h>
void main()
{   long int year,min;
    printf("Enter number of years:");
    scanf("%ld",&year);
    min=year*365*24*60;
    printf("\nMinutes=%ld",min);
}
