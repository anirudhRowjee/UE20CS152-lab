#include "utils.h"
#include <stdio.h>

void ReverseTraverseByIndex(int* myArray, int element_count)
{
    // function to traverse an array by index
    for (int i = 0; i < element_count; i++)
    {
        printf("%d ", myArray[element_count - 1 - i]);
    }
    printf("\n");
}

void ReverseTraverseByPointer(int* myArray, int element_count)
{
    // find the address of the final element of the array
    int* final_address = myArray + element_count - 1;
    // attempt linear traversal to make sure pointer math is right
    do {
        printf("%d ", *final_address);
        final_address--;
    }
    while (final_address != myArray - 1);
    printf("\n");
}
