#include<stdio.h>
void main()
{   char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
        printf("Entered character is a digit");
    else if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
        printf("Entered character is an alphabet");
    else if(ch>=33 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=126)
        printf("Entered character is a special letter");
}
