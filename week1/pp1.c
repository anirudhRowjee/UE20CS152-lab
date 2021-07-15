#include <stdio.h>
#include <math.h>

int main()
{
    // write a program to find the roots of a quadratic equation

    float a, b, c;
    float x, y, plus, minus;

    printf("Enter a b c >> ");
    scanf("%f %f %f", &a, &b, &c);

    float discriminant = (b*b) - (4*a*c);

    if (discriminant < 0)
    {
        // normalize to positive number
        discriminant = fabsf(discriminant);
        // alternatively, 
        // discriminant = discriminant + -2*discriminant;
        x = (-1*b) / (2*a);
        y = sqrtf(discriminant) / (2*a);

        printf("The Roots of the equation are >> \n");
        printf("%f + %fi and %f - %fi\n", x, y, x, y);
    }
    else
    {
        x = (-1*b) / (2*a);
        y = sqrtf(discriminant) / (2*a);
        plus = x + y;
        minus = x - y;
        printf("The Roots of the above equation are %f and %f\n", plus, minus);
    }

    return 0;
}

