// Wap, for addtion of two matrices
#include <stdio.h>
void main()
{
    int x[3][3], y[3][3];
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

    printf("Addtion of the matrices=\n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", x[i][j] + y[i][j]);
        }
        printf("\n");
    }
}
// Output
// Enter matrix x:
// 1 2 3 4 5 6 7 8 9
// Enter matrix y:
// 1 2 3 4 5 6 7 8 9
// Addtion of the matrices=
// 2       4       6      
// 8       10      12     
// 14      16      18  