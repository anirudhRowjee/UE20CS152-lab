#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("Invalid number of arguments! Only 2 allowed.\n");
    }
    else
    {
        char* source_file = argv[1];
        char* dest_file = argv[2];
        printf("Copying from %s to %s\n", source_file, dest_file);

        FILE* source = fopen(source_file, "r");
        FILE* destination = fopen(dest_file, "w");

        char c;
        while ((c = fgetc(source)) != '\0' &&  c != EOF)
        {
            fputc(c, destination);
        }
        printf("Succesfully copied.\n");

        fclose(source);
        fclose(destination);
    }
    return 0;
}
