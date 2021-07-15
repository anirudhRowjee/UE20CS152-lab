#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

int main()
{
    // program to find the sum of the (n-1)! from one to n
    int sum = 0;
    int limit;

    printf("Enter the limit of the sum > ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        sum += factorial(i - 1);
    }

    printf("The answer is %d\n", sum);

    return 0;
}

