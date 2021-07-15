#include <stdio.h>
#include "utils.h"

void generatePascalTriangle(int depth, int multi_array[100][100])
{
    // function to generate a Pascal's Triangle in a
    // depthXdepth array

    // this is the row iterator
    for (int i = 0; i < depth; i++)
    {

        multi_array[i][0] = 1;
        // this is the inner iterator, start from 1 as the 
        // 0th column will be one by default
        for (int j = 1; j <= i; j++)
        {
            // printf("%d %d\n", i, j);
            // take care of the diagonal
            if (i == j)
            {
                multi_array[i][j] = 1;
            }
            // strict branching to prevent rewrites
            else
            {
                int sum = multi_array[i-1][j-1] + multi_array[i-1][j];
                // printf("Added %d at (%d, %d)\n", sum, i, j);
                multi_array[i][j] = sum;
            }
        }
    }
}
