// WAP, to enter a string then display that is pallindrome or not using predefined string function
#include <stdio.h>
#include <string.h>
void main()
{
    char x[30], y[30];
    printf("Enter a string:\n");
    gets(x);
    strcpy(y, x);
    if (strcmp(strrev(x), y) == 0)
    {
        printf("Pallindrome");
    }
    else
    {
        printf("Not a Pallindrome");
    }
}
// output
// Enter a string:
// madam
// Pallindrome