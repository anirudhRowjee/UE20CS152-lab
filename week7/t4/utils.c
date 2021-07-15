#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"



/*
 * Read from the CSV file at <filename> and tokenize
 * store each in destination
 */
int parse_csv_file(char* filename, student** destination)
{
    FILE* csv_file = fopen(filename, "r");
    if (csv_file == NULL)
    {
        printf("Couldn't open file!\n");
        return 1;
    }

    // calculate sizes
    fseek(csv_file, 0, SEEK_END);
    long fsize = ftell(csv_file);
    fseek(csv_file, 0, SEEK_SET);
    // create a buffer to read the contents of the file from 
    char* file_buffer = malloc((fsize + 1)*sizeof(char));


    // read everything into file_buffer
    fread(file_buffer, 1, fsize, csv_file);

    // fputs(file_buffer, stdout);

    // begin the parsing
    char* row;
    int counter = 0;
    row = strtok(file_buffer, "\n");
    while (row != NULL)
    {
        // printf("Tokenizer START: %s\n", row);
        // printf("Parsing student %d\n", counter+1);

        // since we have a guarantee of the number of columns in 
        // the CSV file, we need not call strtok() in a while loop

        // this is necessary because the string variable might
        // have been garbage-collected and overwritten by the time it's read
        // at its memory location
        char* name = malloc(sizeof(char)*20);
        int roll_number = 0;

        char temp_row[100];
        strcpy(temp_row, row);

        // printf("%s\n", temp_row);
        sscanf(temp_row, "%[^,],%d", name, &roll_number);

        // convert from string to integer
        // printf("READ (%s, %d)\n", name, roll_number);

        // allocate new memory for the pointer
        student* new_student = malloc(sizeof(student));

        new_student->name = name;
        new_student->roll_number = roll_number;

        /*
        printf(
                "New student (%d, %s) at %p\n", 
                new_student->roll_number, new_student->name,
                new_student
        );
        */

        destination[counter] = new_student;
        counter++;
        row = strtok(NULL, "\n");
        // printf("Tokenizer END: %s\n", row);
    }

    fclose(csv_file);
    free(file_buffer);
    printf("Successfully parsed into array\n");
    return counter;
}

// function to print the array of students formatted
void print_student_details(int count, student** student_pointer_array)
{
    printf("----- STUDENT DETAILS -----\n");
    for (int i = 0; i < count; i++)
    {
        student* temp = student_pointer_array[i];
        printf("%5d | %10s\n", 
                temp->roll_number, 
                temp->name
              );
    }
}

int free_pointer_array(int count, student** student_pointer_array)
{
    for (int i = 0; i < count; i++)
    {
        free(student_pointer_array[i]->name);
        free(student_pointer_array[i]);
    }
    printf("Successfully cleaned up!\n");
    return 0;
};


// comparator function for roll numbers
int compare_by_rollno(student* student1, student* student2)
{
    if (student1->roll_number > student2->roll_number)
    {
        return 1;
    }
    else
    {
        // save swapping on equal
        return 0;
    }
}

// comparator function for names
int compare_by_name(student* student1, student* student2)
{
    if (strcmp(student1->name, student2->name) > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


/*
 * This function accepts an array of pointers and a
 * comparator function that acts on two pointers.
 * It uses bubble sort on the array of pointers to 
 * sort them on the basis of the comparator function provided.
 */
void sort_student_details(
    int student_count,
    student** students,
    int (*sort_function)(student* first, student* second)
)
{
    for (int i = 0; i < student_count; i++)
    {
        for (int j = 0; j < student_count - i - 1; j++)
        {
            if (sort_function(students[j], students[j+1]))
            {
                student* temp = students[j+1];
                students[j+1] = students[j];
                students[j] = temp;
            }
        }
    }
}
