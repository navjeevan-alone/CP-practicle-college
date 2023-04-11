// WAP, to enter two numbers and  swap them variables using pointer
#include <stdio.h>
void main()
{
    int *x, *y;
    printf("Enter two numbers :");
    scanf("%d %d", x, y);
    printf("\nBefore swapping x=%d & y=%d", *x, *y);
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    printf("\nAfter swapping x=%d and y=%d", *x, *y);
}

// Output :
// Enter two numbers :12 15
// Before swapping x=12 & y=15
// After swapping x=15 and y=12