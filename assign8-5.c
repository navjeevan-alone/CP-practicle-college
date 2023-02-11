// wap, to calculate the factorial of number using function with argument and return value
#include <stdio.h>
void main()
{
    int num, i;
    int fact(int *);
    printf("Enter a number: ");
    scanf("%d", &num);
    i = fact(&num);
    printf("The factorial is %d", i);
}
int fact(int *x)
{
    int f = 1;
    while (*x > 0)
    {
        f = f * (*x);
        *x = *x - 1;
    }
    return f;
}
// output 
// Enter a number: 4
// The factorial is 24