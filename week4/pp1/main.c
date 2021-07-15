#include <stdio.h>
#include "utils.h"

int main()
{
    char new_string[500];
    int string_length = 0;
    char temp;

    printf("Enter the string to Analyze > ");
    while((temp = getchar()) != EOF && (temp != '\n'))
    {
        new_string[string_length] = temp;
        string_length++;
    }

    char_frequency_distribution(new_string, string_length);

    return 0;
}



