#include <stdio.h>
#include <stdbool.h>
#include <strings.h>
#include "utils.h"


/*
 * Aim: Write functions to 
 * a) Reverse a String
 * b) Check for the Equality of two strings
 */

int main()
{
    // declare a blank string, we will fix length overflows using putchar
    char input[500];
    int string_length = 0;

    printf("Enter the string > ");
    char temp;
    while ((temp = getchar()) != EOF && temp != '\n')
    {
        input[string_length] = temp;
        string_length++;
    }

    // declare the array for the reversed string to go in
    char output[string_length+1];
    output[string_length] = '\0';

    reverse_string(input, output, string_length);
    printf("the reversed string is %s\n", output);

    bool status = strings_are_equal(input, output, string_length);
    printf("The Strings are %s\n", status ? "Equal" : "Not Equal");
    return 0;
}
