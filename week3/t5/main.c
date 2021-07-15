#include <stdio.h>
#include <stdbool.h>
#include "utils.h"

int main()
{
    // define the maximium size we can check for
    const int MAX_VAL = 10000;
    int test;
    printf("Enter the number to check the primality of > ");
    scanf("%d", &test);

    bool sieve[MAX_VAL];
    // set every element to True
    for (int i = 0; i < MAX_VAL; i++)
    {
        sieve[i] = true;
    }

    initialize_sieve(sieve, MAX_VAL);
    check_number(test, sieve);
    int next_number = get_next_prime(test, sieve, MAX_VAL);
    printf("The next prime number is %d\n", next_number);

    return 0;
}
