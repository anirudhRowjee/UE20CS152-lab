#include <stdio.h>
#include "utils.h"

int main()
{
    int count;
    char filename[50];

    printf("Enter Filename to write to >> ");
    scanf("%s", filename);

    printf("Enter Number of Lines to write >> ");
    scanf("%d", &count);

    // extremely weird bug where not doing this skips over the first
    // iteration of the loop to scan a new loop
    // dispose of the newline character by using a single getchar()
    getchar();

    printf("Reading lines...\n");

    int status = AppendNLines(filename, count);

    if (status == 0)
    {
        printf("%d Lines succesfully written!\n", count);
    }
    else
    {
        printf("Error!\n");
    }

    return 0;
}
