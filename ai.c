#include <stdio.h>
void main()
{
//
    if (ch)
    {
        switch (tolower(ch))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
            break;
        }
    }
    else
    {
        printf("Invalid");
    }
}