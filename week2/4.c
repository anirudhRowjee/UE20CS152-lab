#include <stdio.h>
#include <stdbool.h>


bool is_prime(int number)
{
    // function to check if a number is prime using exhaustive enumeration
    bool flag = true;
    bool is_num_two = (number == 2);
    if (is_num_two)
    {
        return true;
    }
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int test;
    printf("Enter the number to test > ");
    scanf("%d", &test);
    printf("%d %s a prime number\n", test, is_prime(test) ? "is" : "is not");
    return 0;
}

