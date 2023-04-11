// Wap, enter  a 3X3 matrix and display transpose of that matrix
#include <stdio.h>
void main()
{
    int mat[3][3], matTrans[3][3], temp;
    printf("Enter the matrix :");
    // entering matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    };
    // make transpose of matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matTrans[i][j] = mat[j][i];
        }
    }

    // displaying matrix
    printf("Transposed matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matTrans[i][j]);
        }
        printf("\n");
    };
}