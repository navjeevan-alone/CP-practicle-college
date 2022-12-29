// WAP, to enter a number and display that number in reverse order?

#include <stdio.h>
void main()
{
    int n, r, rev = 0;

    printf("Enter a number :");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;
    }
    printf("Reverse of number : %d", rev);
}