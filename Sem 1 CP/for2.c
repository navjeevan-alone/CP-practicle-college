// WAP, To display the numbers from 20-50 which are divisible by 3 & 5
#include <stdio.h>
void main()
{
    for (int i = 20; i <= 50; i++)
    {
        if (i % 15 == 0)
        {
            printf("%d\n", i);
        }
    }
}