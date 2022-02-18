#include<stdio.h>
void main()
{   char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    switch(ch)
    {   case 'A': case 'a':
        case 'E': case 'e':
        case 'I': case 'i':
        case 'O': case 'o':
        case 'U': case 'u':
                            printf("Entered character is a vowel");
                            break;
        default:
                            printf("Entered character is a consonant");

    }

}
