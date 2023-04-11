// WAP, to calcalate sum of numbers from 1 to n using for loop
#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter a number :");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    printf("%d", sum);
}