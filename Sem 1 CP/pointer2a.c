// WAP, to enter two numbers and  swap them variables using pointer
#include <stdio.h>
void main()
{
    int a = 10, b = 20, *x, *y;
    x = &a;
    y = &b;

    // a = a + b;
    // b = a - b;
    // a = a - b;

    a = *x + *y;
    b = *x - *y;fasdf
    a = *x - *y;

    printf("Value of a : %d\n", a);
    printf("Value of b : %d\n", b);
}

// Output
// Value of a : 20
// Value of b : 10