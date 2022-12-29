// WAP, to calcalate sum of numbers from 1 to n using for loop
#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter a number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
}
