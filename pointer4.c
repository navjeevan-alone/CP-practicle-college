// Calculate the sum of digits of number using pointer
#include <stdio.h>
void main()
{
    int num, sum = 0, rem;
    printf("Enter a number :");
        scanf("%d", &num);

    for (int i = 0; num != 0; i++)
    {
        sum += num % 10;
        num = num / 10;
    }
    printf("Sum of elements of array :%d",sum);
}