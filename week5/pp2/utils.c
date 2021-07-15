#include <stdio.h>
#include "utils.h"


void load_measure(measure* number)
{
    // function to accept a measure from the user
    printf("Enter the Measure as '<feet> <inch>' >> ");
    scanf("%f %f", &number->feet, &number->inches);
}

void display_measure(measure number)
{
    printf("%f Feet and %f Inches.\n", number.feet, number.inches);
}

measure add(measure m1, measure m2)
{
    // adds two complex numbers
    measure m3 = {0, 0};
    m3.feet = m1.feet + m2.feet;

    float temp_inches = m1.inches + m2.inches;
    if (temp_inches >= 12)
    {
        m3.inches = temp_inches - 12.0;
        m3.feet += 1;
    }
    else
    {
        m3.inches = temp_inches;
    }
    return m3;
}

