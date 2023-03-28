// WAP, to display small one out of three numbers inputted by you using nested if
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter a three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    {
        if (a < c)
        {
            printf("A is smallest");
            if (a < c)
            {
                printf("A is smallest");
            }
        }
    }
    if (b < a)
    {
        if (b < c)
        {
            printf("B is smallest");
        }
        else
        {
            printf("C is smallest");
        }
    }
}