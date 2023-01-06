// WAP, to enter a number and display number is 1 digit, 2 digit, 3 digit or more than 3 digit using normal way of if construct
#include <stdio.h>

void main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (a > 0 && a <= 9)
    {
        printf("1 digit\n");
    };
    if (a >= 10 && a <= 99)
    {
        printf("2 digit\n");
    };
    if (a >= 100 && a <= 999)
    {
        printf("3 digit\n");
    };
    if (a > 999)
    {
        printf("more than 3 digit\n");
    };
}