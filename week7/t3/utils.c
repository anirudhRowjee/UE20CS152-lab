#include <stdio.h>
#include "utils.h"

int bubblesort(int* numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; ++j)
        {
            if (numbers[j] >= numbers[j+1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
    return 0;
}
