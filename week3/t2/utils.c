#include <stdio.h>
#include "utils.h"


int factorial(int base)
{
    if (base <= 1)
    {
        return 1;
    }
    else
    {
        return base * factorial(base - 1);
    }
}
