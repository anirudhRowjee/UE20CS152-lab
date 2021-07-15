#include <stdio.h>


int nth_fib(int count)
{
    if (count <= 2)
    {
        return 1;
    }
    else
    {
        return nth_fib(count-1) + nth_fib(count-2);
    }
}


int main()
{
    int target;

    printf("Enter the number limit > ");
    scanf("%d", &target);

    for (int i = 1; i <= target; i++)
    {
        printf("%d ", nth_fib(i));
    }
    printf("\n");

    return 0;
}

