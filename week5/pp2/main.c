#include <stdio.h>
#include "utils.h"

int main()
{
    measure m1, m2;

    printf("The First Measure \n");
    load_measure(&m1);
    printf("The Second Measure \n");
    load_measure(&m2);

    // add them, accounting for overflow
    measure final = add(m1, m2);

    // display
    printf("The Final Distance is > ");
    display_measure(final);

    return 0;
}
