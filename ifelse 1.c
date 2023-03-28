// WAP, to enter a number and display number is 1 digit, 2 digit, 3 digit or more than 3 digit using normal way of if construct
#include <stdio.h>
void main()
{Z
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (a > 0 && a <= 9)
    {
        printf("\n1 digit");
    }
    if (a >= 10 && a <= 99)
    {
        printf("\n2 digit");
    }
    if (a >= 100 && a <= 999)
    {
        printf("\n3 digit");
    }
    if (a > 999)
    {
        printf("\nmore than 3 digit");
    }
}