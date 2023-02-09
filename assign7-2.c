// WAP, swap the value of two variable using pointer
#include <stdio.h>
void main()
{
    int a = 10, b = 20, *x, *y;
    x = &a;
    y = &b;

    printf("Value before swaping: a=%d,b=%d\n", a, b);
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    printf("Value after swaping: a=%d,b=%d", a, b);
}
// output
// Value before swaping: a=10,b=20
// Value after swaping : a = 20, b = 10