#include <stdio.h>
#include "utils.h"
#include <limits.h>

int FindSmallestElement(int* numbers, int length)
{
    // function to return the smallest element of an array
    int smallest = INT_MAX;
    int size = length;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }
    return smallest;
}


int FindLargestElement(int* numbers, int length)
{
    // function to return the smallest element of an array
    int greatest = INT_MIN;
    int size = length;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > greatest)
        {
            greatest = numbers[i];
        }
    }
    return greatest;
}

