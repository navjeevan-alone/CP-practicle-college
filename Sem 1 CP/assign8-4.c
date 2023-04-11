// WAP, to calculate the sum of the digits of number using function with argument & no return value
#include <stdio.h>
void main()
{
    int num;
    void sum(int);
    printf("Enter a number: ");
    scanf("%d", &num);
    sum(num);
}

void sum(int x)
{

    int r, s = 0;
    while (x > 0)
    {
        r = x % 10;
        s = s + r;
        x = x / 10;
    }

    printf("Sum is %d", s);
}
// output
// Enter a number: 456
// Sum is 15