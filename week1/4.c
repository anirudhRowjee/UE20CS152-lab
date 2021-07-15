#include <stdio.h>

int main()
{
    // accept the number for which we will print the table and star
    int limit;

    printf("Enter the number >> ");
    scanf("%d", &limit);

    // multiplication table
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", limit, i, limit*i);
    }

    printf("---\n");

    // star pattern
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            if (j <= i)
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}

