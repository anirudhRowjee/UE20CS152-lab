#include <stdio.h>
#include <stdbool.h>

bool is_valid_triangle(float a, float b, float c)
{
    return (a + b + c == 180.0);
}

int main()
{
    float a, b, c;
    printf("Enter the three angles separated by commas and spaces > ");
    scanf("%f, %f, %f", &a, &b, &c);
    printf("%s\n", is_valid_triangle(a, b, c)  ? "VALID" : "INVALID");
    return 0;
}

