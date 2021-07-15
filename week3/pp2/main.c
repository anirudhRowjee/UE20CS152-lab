#include <stdio.h>
#include "utils.h"


int main()
{
    int limit;

    printf("Enter the Count of elements of the Fibonacci Array > ");
    scanf("%d", &limit);

    int fibArray[limit];

    PropagateFibonacci(fibArray, limit);

    for (int i = 0; i < limit; i++)
    {
        printf("%d ", fibArray[i]);
    }
    printf("\n");

    return 0;
}
