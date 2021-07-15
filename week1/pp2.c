#include <stdio.h>

int main()
{
    // simple compression, currently works only for alphabets
    char current, previous = EOF;
    // works for limited input sizes as of now
    char alphabets[100];

    int changed = 1;
    int count = 0;

    while ((current = getchar()) != '\n' && current != EOF)
    {
        // check for changes
        if (previous == current)
        {
            changed = 0;
        }
        else
        {
            changed = 1;
        }

        // handle changes
        if (changed == 1)
        {
            alphabets[count] = current;
            previous = current;
            count++;
        }
    }

    printf("The compressed string is >> %s\n", alphabets);

    return 0;
}

