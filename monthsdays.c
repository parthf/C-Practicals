#include<stdio.h>
void main()
{   int mno;
    printf("Enter the month number:");
    scanf("%d",&mno);
    switch(mno)
    {   case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                printf("It has 31 days");
                break;
        case 2:
                printf("It has 28 or 29 days");
                break;
        case 4:
        case 6:
        case 9:
        case 11:
                printf("It has 30 days");
                break;
        default:
                printf("Your entered year doesn't exit");
    }
}







