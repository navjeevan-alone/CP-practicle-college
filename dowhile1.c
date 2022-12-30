#include <stdio.h>
void main()
{
    int num, r, rev = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    do
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    } while (num > 0);
    printf("Reverse is : %d", rev);
}
