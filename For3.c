// WAP, to enter a number then display factorial of that number
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        fact = fact * i;
    }
    printf("%d", fact);
}