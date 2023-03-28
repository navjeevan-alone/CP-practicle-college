// WAP, to access the value of variable using pointer
#include <stdio.h>
void main()
{
    int a = 10, *y;
    y = &a;
    printf("Address of a is :%d\n", y);
    printf("Value of a is :%d\n", *y);
}

// output
//  Address of a is : 1612708052
//  Value of a is : 10