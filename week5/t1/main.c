#include <stdio.h>
#include "utils.h"

int main()
{
    int limit;
    printf("Enter the depth of the Pascal Triangle > ");
    scanf("%d", &limit);

    int pascal[100][100];
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            pascal[i][j] = 0;
        }
    }

    generatePascalTriangle(limit, pascal);
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            if (pascal[i][j] == 0)
            {
                printf("");
            }
            else
            {
                printf("%d ", pascal[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
