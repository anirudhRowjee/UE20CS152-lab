#include <stdio.h>
#include "utils.h"

/*
 * Write a function to remove all repeated characters from 
 * a given string and display the string without duplicate
 * characters
 *
 */

int main()
{
    char input[500];
    int string_length = 0;
    char temp;

    printf("Enter the string > ");
    while ((temp = getchar()) != EOF && temp != '\n')
    {
        input[string_length] = temp;
        string_length++;
    }
    printf("The string without any repeated characters > ");
    displayWithoutRepeatedCharacters(input, string_length);
    return 0;
}
