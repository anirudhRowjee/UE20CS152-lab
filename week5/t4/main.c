#include <stdio.h>
#include "utils.h"

int main()
{
    complex_num c1, c2;

    printf("Enter the Details of Complex Number 1.\n");
    load_complex(&c1);
    printf("Enter the Details of Complex Number 2.\n");
    load_complex(&c2);

    printf("the sum is > ");
    display_complex(add(c1, c2));

    printf("the difference is > ");
    display_complex(subtract(c1, c2));

    return 0;
}
