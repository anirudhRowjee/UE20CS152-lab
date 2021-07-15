#include <stdio.h>
#include "utils.h"

int main()
{

    char string1[500], string2[500];
    int length1 = 0, length2 = 0, repeat = 0;

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

    printf("Enter the number of repeats > ");
    scanf("%d", &repeat);

    concatenateNTimes(string1, string2, length1, length2, repeat);

    return 0;
}
