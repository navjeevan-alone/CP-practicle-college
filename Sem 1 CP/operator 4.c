// WAP, to enter a number and display it is even or odd using ternary operator or conditional operator
#include <stdio.h>
void main()
{
    int a;
    printf("Enter a numbers : ");
    scanf("%d", &a);
    a % 2 == 0 ? printf("\nThe number is even") : printf("\nThe number is odd");
}