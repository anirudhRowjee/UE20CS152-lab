#include <stdio.h>

void concatenateNTimes(char* input1, char* input2, int l1, int l2, int n)
{
    // printf("%s %d %s %d %d\n", input1, l1, input2, l2, n);
    int new_length = l1 + (n * l2);
    printf("The new length is %d\n", new_length);

    char new_string[new_length];
    for (int i = 0; i < new_length; i++)
    {
        new_string[i] = '*';
    }

    for (int i = 0; i < l1; i++)
    {
        new_string[i] = input1[i];
    }
    // printf("%s\n", new_string);

    for (int i = 0; i < n; i++)
    {
        int offset = l1 + (i * l2);
        for (int j = 0; j < l2; j++)
        {
            new_string[offset + j] = input2[j];
        }
        // printf("%s\n", new_string);
    }
    printf("The repeated string is > ");
    printf("%s\n", new_string);
}
