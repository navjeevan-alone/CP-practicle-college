// WAP, to enter a character and display it is vowel or consonent
#include <stdio.h>
int main()
{

    char ch;
    printf("Enter character :");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel");
        break;

    default:
        printf("Consonent");
        break;
    }
    return 0;
}