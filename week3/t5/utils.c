#include <stdio.h>
#include <stdbool.h>
#include "utils.h"


void initialize_sieve(bool* sieve, int MAX_VAL)
{
    // initialize the sieve of eratosthenes till the maximum integer limit 
    // stored in INT_MAX, and expects the array sieve to have the said 
    // number of elements.

    // iterate through the list as every number is a potential divisor
    // we index the outer array from one, making the offset plus one
    for (int i = 2; i < MAX_VAL; i++)
    {
        // at this point of time, we mark off every number here onward that 
        // is a multiple of this current number
        for (int j = i+1; j < MAX_VAL; j++)
        {
            if (j % i == 0)
            {
                sieve[j-1] = false;
            }
        }
    }
}


void check_number(int number, bool* sieve)
{
    // function to check if the number at number-1 is prime or not
    // it returns the index of this number regardless
    printf("The number %d is %s\n", number,
            sieve[number-1] ? "Prime" : "not prime"
            );
}

int get_next_prime(int number, bool* sieve, int MAX_VAL)
{
    for (int i = number; i < MAX_VAL; i++)
    {
        if (sieve[i])
        {
            return i+1;
        }
    }
}

