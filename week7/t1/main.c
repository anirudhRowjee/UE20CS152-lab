#include <stdio.h>
#include "utils.h"

int main()
{

    char first_filename[100], second_filename[100], target_filename[100];

    printf("Enter the First Filename >> ");
    scanf("%s", first_filename);
    printf("Enter the Second Filename >> ");
    scanf("%s", second_filename);
    printf("Enter the Target Filename >> ");
    scanf("%s", target_filename);

    // error checking
    if (merge("target.txt", "first.txt", "second.txt"))
    {
        printf("Could not merge!\n");
    }
    else
    {
        printf("Merged Successfully!\n");
    }

    return 0;
}
