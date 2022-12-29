// WAP, To display the numbers from 20-50 which are divisible by 3 & 5 using while loop
#include <stdio.h>
void main()
{

    int i = 20;
    while (i <= 50)
    {
        if (i % 15 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}