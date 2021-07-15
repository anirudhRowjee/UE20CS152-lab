#include <stdio.h>
#include "utils.h"


void load_complex(complex_num* number)
{
    // function to accept a complex number from the user
    printf("Enter the Complex Number as 'A + Bi' >> ");
    scanf("%f + %fi", &number->re, &number->im);
}

void display_complex(complex_num number)
{
    printf("%f + %fi\n", number.re, number.im);
}

complex_num add(complex_num c1, complex_num c2)
{
    // adds two complex numbers
    complex_num c3;
    c3.re = c1.re + c2.re;
    c3.im = c1.im + c2.im;
    return c3;
}


complex_num subtract(complex_num c1, complex_num c2)
{
    // subtracts two complex numbers
    complex_num c3;
    c3.re = c1.re - c2.re;
    c3.im = c1.im - c2.im;
    return c3;
}

