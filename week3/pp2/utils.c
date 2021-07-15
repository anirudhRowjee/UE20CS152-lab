#include <stdio.h>
#include "utils.h"

void PropagateFibonacci(int* number_array, int limit)
{
    // function to fill the array number_array with fibonacci numbers 
    // till we reach the nth fibonacci number
    if (number_array[0] != 0 || number_array[1] != 1)
    {
        number_array[0] = 0;
        number_array[1] = 1;
    }

    for (int i = 2; i < limit; i++)
    {
        number_array[i] = number_array[i-1] + number_array[i-2];
    }
}
