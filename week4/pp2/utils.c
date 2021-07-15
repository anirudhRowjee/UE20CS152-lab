#include <stdio.h>
#include <stdbool.h>
#include "utils.h"


bool checkIfPresentAtEnd(char* a, char* b, int l1, int l2)
{
    bool present = true;

    // assumes L1 is longer than l2
    int start = l1 - l2;

    for (int i = 0; i < l2; i++)
    {
        if (a[start + i] != b[i])
            present = false;
    }

    return present;
}
