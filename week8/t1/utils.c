#include <stdio.h>
#include <stdbool.h>
#include "utils.h"


void binarysearch(
        int* numbers,
        int list_length,
        int target,
        int start,
        int end,
        bool (*test)(int test_arg)
)
{
    /*
     * Recursive implementation of Binary Search -
     * find the number AND check if it fits the constraint
     * passed as *test
     */

    // return case
    if (end < start)
    {
        printf("Not found.\n");
        return;
    }

    int middle_index = (start + end) / 2;

    if (numbers[middle_index] == target)
    {
        // regular binary search : return true
        if (test(numbers[middle_index]))
        {
            printf("Found at %d satisfying constraint.\n", middle_index);
        }
        else
        {
            printf("Found at %d.\n", middle_index);
        }
    }
    else
    {
        // check if the number is higher or lower
        if (numbers[middle_index] > target)
        {
            binarysearch(
                    numbers,
                    list_length,
                    target,
                    start,
                    middle_index - 1,
                    test
            );
        }
        else
        {
            // lesser than case, no else-if due to logic
            binarysearch(
                    numbers,
                    list_length,
                    target,
                    middle_index + 1,
                    end,
                    test
            );
        }
    }
}


void sort(int* numbers, int list_length)
{
    // insertion sort
    for (int i = 0; i < list_length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (numbers[i] < numbers[j])
            {
                // insert the number at j
                int temp = numbers[i];
                // shift each number one to the right from i - 1 to j
                for (int t = i; t > j; t--)
                {
                    numbers[t] = numbers[t-1];
                }
                // insert
                numbers[j] = temp;
            }
        }
    }
}

