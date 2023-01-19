// Wap, enter  a two 3X3 matrices and display addition of that two matrices
#include <stdio.h>
void main()
{
    int matA[3][3], matB[3][3], temp;
    // entering matrix
    printf("Enter the [A]:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    };
    printf("Enter the [B]:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    };
    
    printf("Addition of matrices is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matA[i][j]+matB[i][j]);
        }
        printf("\n");
    };
}