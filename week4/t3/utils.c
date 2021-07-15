#include <stdio.h>
#include "utils.h"


void displayWithoutRepeatedCharacters(char* input, int strlen)
{
    // rudimentary hashtable
    // supports ASCII only
    int hashtable[127];
    for (int i = 0; i < 127; i++)
        hashtable[i] = 0;

    // create the new string, and fill it with spaces
    // this is a new string with the maximum length
    // of the old string, given that you cannot have more
    // unique characters than total characters in a string
    char new[strlen];
    int new_length = 0;

    for (int x = 0; x < strlen; x++)
    {
        new[x] = ' ';
    }

    for (int i = 0; i < strlen; i++)
    {
        char current = input[i];

        // get ASCII value of character
        int hash = (int)current;

        // check if the character's a repeated one
        if (hashtable[hash] == 0)
        {
            new[new_length] = current;
            new_length++;
        }
        hashtable[hash]++;
    }
    printf("%s\n", new);

}
