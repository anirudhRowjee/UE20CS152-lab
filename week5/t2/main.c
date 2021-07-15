#include <stdio.h>
#include <stdbool.h>
#include "utils.h"

int main()
{
    int order;
    printf("Enter the Order of the Matrix > ");
    scanf("%d", &order);

    // create the matrix
    int matrix[order][order];
    int transposed[order][order];

    // load user values - original matrix
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("Enter the Element at (%d, %d) > ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // load zeroes - transposed matrix
    LoadZeroes(order, transposed);
    printf("\n");
    printf("The Matrix => \n");
    PrintMatrix(order, matrix);
    printf("\n");
    // transpose the first matrix
    TransposeSquareMatrix(order, matrix, transposed);
    printf("The Transpose => \n");
    PrintMatrix(order, transposed);
    printf("\n");
    // check for equality
    printf("The Matrix is %s\n", 
            CheckSquareMatrixEquality(order, matrix, transposed)
                ? "Symmetric" : "Asymmetric"
          );
    return 0;
}
