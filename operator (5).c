// WAP, to enter three numbers and display the biggest of them

#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three numbers :");
    scanf("%d %d %d", &a, &b, &c);
    a > b &&a > c
        ? printf("a is biggest number")
    : b > a &&b > c
        ? printf("b is biggest number")
        : printf("c is biggest number");
}