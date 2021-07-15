#include <stdio.h>
#include "utils.h"


// function to append N lines to a file
int AppendNLines(char* filename, int line_count)
{
    FILE* outfile = fopen(filename, "w");
    if (outfile == NULL)
    {
        printf("File could not be opened!\n");
        return 1;
    }

    for (int i = 0; i < line_count; ++i)
    {
        printf("Line %d > \n", i+1);
        char c[100];
        fflush(stdin);
        fgets(c, 100, stdin);
        fputs(c, outfile);
    }

    fclose(outfile);
    return 0;
}
