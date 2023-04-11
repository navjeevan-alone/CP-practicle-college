// WAP, to enter a number then display factorial of that number
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    int fact = 1;
    int i = num;
    while (i > 0)
    {
        fact = fact * i;
        i--;
    }

    printf("%d", fact);
}