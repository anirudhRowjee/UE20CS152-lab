#include <stdio.h>
#include <stdbool.h>
#include "utils.h"

int main()
{

    char string1[500], string2[500];
    int length1 = 0, length2 = 0;

    char temp;

    printf("Enter the first string > ");
    while ((temp = getchar()) != EOF && temp != '\n')
    {
        string1[length1] = temp;
        length1++;
    }

    printf("Enter the second string > ");
    while ((temp = getchar()) != EOF && temp != '\n')
    {
        string2[length2] = temp;
        length2++;
    }

    bool present = checkIfPresentAtEnd(string1, string2, 
            length1, length2);
    printf("The second string %s at the end of the first\n", 
            present ? "is present" : "is not present"
            );
    return 0;
}
