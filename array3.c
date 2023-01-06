// WAP, to enter 5 numbers and display it in sorted order
#include <stdio.h>
void main()
{
    int num[20];
    int i, j, a;

    printf("Enter the elements :");
    for (i = 0; i < 5; ++i)
        scanf("%d", &num[i]);
    for (i = 0; i < 5; ++i)
    {
        for (j = i + 1; j < 5; ++j)
        {
            if (num[i] > num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("The numbers in ascending order is:");
    for (i = 0; i < 5; ++i)
    {
        printf("%d\n", num[i]);
    }
}