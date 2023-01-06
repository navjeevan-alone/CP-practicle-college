// WAP, to implement the different types of arithmatic operator for calculation of result
#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("\nAddition is %d", a + b);
    printf("\nSubstraction is %d", a - b);
    printf("\nMultiplication is %d", a * b);
    printf("\nDivision is %.2f", (float)a / (float)b);
    printf("\nRemainder is %d", a % b);
}