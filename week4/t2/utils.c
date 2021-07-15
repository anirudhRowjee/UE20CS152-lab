#include <stdio.h>


void find_and_replace(char* input_string, int string_length, 
        char find, char replace)
{
    for (int i = 0; i < string_length; i++)
    {
        if (input_string[i] == find)
        {
            input_string[i] = replace;
        }
    }
}
