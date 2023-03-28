#include <stdio.h>
void main()
{
    int x[3][3], y[3][3], mul[3][3], sum = 0;
    printf("Enter matrix x:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("Enter matrix y:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &y[i][j]);
        }
    }

    printf("multiply of the matrix=\n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += x[i][k] * y[k][j];
            }
            printf("%d\t", sum);
            sum = 0;
        }
        printf("\n", sum);
    }
}