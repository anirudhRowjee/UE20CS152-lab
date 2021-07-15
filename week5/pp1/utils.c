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

void FillMatrix(int depth, int (*matrix)[depth])
{
    // function to fill the matrix in the desired
    // pattern
    int limit = depth - 1;
    for (int i = 0; i < depth; i++)
    {
        for (int j = 0; j < depth; j++)
        {
            if (i + j < limit)
            {
                matrix[i][j] = 1;
            }
            else if (i + j > limit)
            {
                matrix[i][j] = -1;
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }

}

