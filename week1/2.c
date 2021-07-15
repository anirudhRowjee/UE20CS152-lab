#include <stdio.h>

// function to convert an arbitrary character to lowercase
char toLower(char input)
{
    // check if it's already uppercase
    if (input >= 65 && input <= 90)
    {
        return input;
    }
    else if (input >= 97 && input <= 122)
    {
        return input - 32;
    }
    else
    {
        return input;
    }
}


int main()
{
    // take a stream of characters as input
    // convert them all, and print them out.
    char input[10000];
    int count = 0;
    char c = EOF;

    while((c = getchar()) != '\n' && c != EOF)
    {
        input[count] = toLower(c);
        count++;
    }
    printf("%s\n", input);

    return 0;
}

