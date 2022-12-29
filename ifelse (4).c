// WAP, to enter a three numbers and display higher between them using if else ladder
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter a three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("A is biggest number");
    }
    else if (b > a && b > c)
    {
        printf("B is biggest number");
    }
  
    else
    {
        printf("C is biggest number");
    }
}