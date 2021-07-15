#include <stdio.h>
#include "utils.h"


int main()
{
    int n, r;
    printf("Enter the numbers N and R separated by a space.\n");
    scanf("%d %d", &n, &r);
    int answer = factorial(n) / (factorial(n-r) * factorial(r));
    printf("The answer nCr is > %d\n", answer);
}
