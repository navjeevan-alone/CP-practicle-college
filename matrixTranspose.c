// Wap, for addtion of two matrices
#include <stdio.h>
void main()
{
    int x[3][3];
    printf("Enter matrix x:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &x[i][j]);
        }
        
    }

    printf("Transpose of the matrix=\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", x[j][i]);
        }
        printf("\n");
    }
}
// Output
// Enter matrix x:
// 1 2 3 4 5 6 7 8 9
// Transpose of the matrix=
// 1       4       7
// 2       5       8
// 3       6       9