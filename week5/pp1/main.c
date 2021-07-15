#include <stdio.h>
#include "utils.h"

int main()
{
    int limit;
    printf("enter the limit >> ");

    scanf("%d", &limit);
    int matrix[limit][limit];

    LoadZeroes(limit, matrix);
    FillMatrix(limit, matrix);
    PrintMatrix(limit, matrix);
    return 0;
}
