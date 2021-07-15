#include <stdio.h>
#include <stdbool.h>
#include "utils.h"

int LoadUniqueElements(int* sample, int* target, int element_count)
{
    // function that takes pointers to two arrays of the same
    // length and loads the unique elements of sample
    // into target
    // returns the number of unique elements
    int size = element_count;
    int unique_top_index = 0;

    for (int i = 0; i < size; i++)
    {
        int sample_element = sample[i];
        bool unique = true;
        for (int j = 0; j < size; j++)
        {
            if (target[j] == sample_element)
            {
                unique = false;
                break;
            }
        }
        // if unique is still true at this point, we make it a new
        // element in the list of unique numbers
        if (unique)
        {
            target[unique_top_index] = sample_element;
            unique_top_index++;
        }
    }
    return unique_top_index;
}

