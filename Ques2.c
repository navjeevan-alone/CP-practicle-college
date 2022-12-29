#include <stdio.h>
void main()
{
    int a = 10, b = 11;
    printf("Left shift of numbers : %d", (a << 2));
    printf("\nRight shift of numbers : %d", (b >> 2));
    printf("\nLeft bitwise shift of numbers : %d", (a & b));
    printf("\nRight bitwise shift of numbers : %d", (a | b));
}