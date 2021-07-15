#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Hello, world!\n");
    printf("Enter two numbers whose sum is less than 10.\n");

    scanf("%d %d", &a, &b);
    c = a + b;

    if (c >= 10)
    {
        fprintf(stderr, "The sum of these two numbers is greater than 10\n");
        return 1;
    }
    else
    {
        printf("The sum of these two numbers is less than 10\n");
        return 0;
    }
    return 0;
}

