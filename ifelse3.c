// WAP, to enter a year and display it is leap year or not
#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (a % 4 == 0)

        printf("\nYear is leap year");

    else
    {
        printf("\nYear is not leap year");
    }
}