#include <stdio.h>
#include "utils.h"

// function to output the content of two files in one file
int merge(char* target, char* first, char* second)
{
    // open all three files and check for errors
    FILE* target_file = fopen(target, "w");
    FILE* first_file = fopen(first, "r");
    FILE* second_file = fopen(second, "r");

    char c;
    while ((c = fgetc(first_file)) != EOF)
    {
        fputc(c, target_file);
    }
    while ((c = fgetc(second_file)) != EOF)
    {
        fputc(c, target_file);
    }
    // fputc(EOF, target_file);

    // close all three files
    int t = fclose(target_file);
    int f = fclose(first_file);
    int s = fclose(second_file);

    if (s == EOF || t == EOF || f == EOF)
    {
        printf("Error closing the files!\n");
        return 1;
    }
    return 0;
}
