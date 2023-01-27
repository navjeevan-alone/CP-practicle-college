// WAP, to calculate the sum of elements of array using pointer

#include <stdio.h>
void main()
{
    int x[5], *y, sum = 0;
    printf("Enter the elements of array :\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
    }
    y = x;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(y + i);
    }
    printf("Sum of array elements :%d", sum);
}
// Output :
// Enter the elements of array :
// 1
// 2
// 3
// 4
// 5
// Sum of array elements :15