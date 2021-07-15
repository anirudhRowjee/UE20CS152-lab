#include <stdio.h>
#include <stdbool.h>
#include "utils.h"

/* write a function to find all the occurrances of a character
 * in a string, and use this function to replace all said
 * occurrances by another character
 */

int main()
{
    // declare the string we'll be using
    char input[500];
    int string_length = 0;
    char temp;
    printf("Enter the string > ");

    while ((temp = getchar()) != EOF && temp != '\n')
    {
        input[string_length] = temp;
        string_length++;
    }

    char find, replace;
    printf("Enter the Characters to look for and replace > ");
    scanf("%c %c", &find, &replace);
    find_and_replace(input, string_length, find, replace);

    printf("The substituted string is > ");
    for (int i = 0; i < string_length; i++)
    {
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}
