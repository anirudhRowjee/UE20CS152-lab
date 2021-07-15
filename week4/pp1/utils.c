#include <stdio.h>
#include "utils.h"


void char_frequency_distribution(char* input, int strlen)
{
    // rudimentary hashtable
    // supports ASCII only
    int hashtable[127];
    for (int i = 0; i < 127; i++)
        hashtable[i] = 0;

    for (int i = 0; i < strlen; i++)
    {
        char current = input[i];

        // get ASCII value of character
        int hash = (int)current;

        hashtable[hash]++;
    }

    for (int i = 0; i < 127; i++)
    {
        int current = hashtable[i];
        // display only those characters present
        if (current >= 1)
        {
            printf("Character %c appears %d times\n", i, current);
        }
    }
}
