#include <stdio.h>
#include <stdbool.h>
#include "utils.h"


void PrintMatrix(int depth, int (*matrix)[depth])
{
    // function to print matrix
    for (int i = 0; i < depth; i++)
    {
        for (int j = 0; j < depth; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void LoadZeroes(int depth, int (*matrix)[depth])
{
    // fills a matrix with zeroes
    for (int i = 0; i < depth; i++)
    {
        for (int j = 0; j < depth; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

void TransposeSquareMatrix(
        int depth, int (*original)[depth], int (*transpose)[depth]
)
{
    // transpose the first matrix
    for (int i = 0; i < depth; i++)
    {
        for (int j = 0; j < depth; j++)
        {
            transpose[i][j] = original[j][i];
        }
    }
}

bool CheckSquareMatrixEquality(
        int depth, int (*first)[depth], int (*second)[depth]
)
{
    bool equal = true;
    for (int i = 0; i < depth; i++)
    {
        for (int j = 0; j < depth; j++)
        {
            if (first[i][j] != second[i][j])
            {
                equal = false;
                return equal;
            }
        }
    }
    return equal;
}
