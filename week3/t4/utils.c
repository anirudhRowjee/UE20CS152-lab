#include <stdio.h>
#include "utils.h"


int custom_pow(int x, int y)
{
    // function to recursively calculate the power of one number to the other
    // this function recursively calculates x to the power of y
    if (y <= 1)
    {
        return x;
    }
    else
    {
        return x * custom_pow(x, y-1);
    }
}
