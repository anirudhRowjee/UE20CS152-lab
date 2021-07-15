#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "utils.h"

void reverse_string(char* input_string, char* reversed_string, int string_length)
{
    // index of the final character in the input array
    int final_character = string_length-1;
    int offset = 0;
    for (int i = 0; i < string_length; i++)
    {
        reversed_string[i] = input_string[final_character - offset];
        offset++;
    }
}

bool strings_are_equal(char* first, char* second, int string_length)
{
    // function to check if two strings are equal
    bool equal = true;

    for (int i = 0; i < string_length; i++)
    {
        if (first[i] != second[i])
        {
            equal = false;
        }
        return equal;
    }

}
