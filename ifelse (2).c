// WAP, to enter a number and display that is divisible by both 4 & 5 or not using double way
#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (a % 4 == 0 && a % 5 == 0)
    {
        printf("\nNumber is divisible by 4 & 5");
    }
    else
    {
        printf("\nNumber is not divisible by 4 & 5");
    }
}