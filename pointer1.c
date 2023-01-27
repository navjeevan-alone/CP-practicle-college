// WAP, to access value of variable using pointer
#include <stdio.h>
void main()
{
    int a = 11, *y;
    y = &a;
    printf("Address of a is : %d\n", y);
    printf("Value of *y is : %d\n", *y);
    printf("Value of *(&a) is : %d\n", *(&a));
}

// Output
// Address of a is : -2046821804
// Value of *y is : 11
// Value of *(&a) is : 11