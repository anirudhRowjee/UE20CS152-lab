#include <stdio.h>
#include "utils.h"

int main()
{

    printf("\n** Student Manager **\n");

    // Initialize pointer array of student objects
    student* students[100];

    // read students from file
    int student_count = parse_csv_file("test.csv", students);

    int choice = 1;

    while (choice != 0)
    {
        printf(
        "Enter 1 to sort by Name, enter 2 to sort by Roll Number, 0 to exit>> "
        );
        scanf("%d", &choice);

        // declare a NULL function pointer
        int (*comparator)(student* f, student* s) = NULL;

        switch (choice)
        {
            case 1:
                comparator = &compare_by_name;
                sort_student_details(student_count, students, comparator);
                print_student_details(student_count, students);
                break;
            case 2:
                comparator = &compare_by_rollno;
                sort_student_details(student_count, students, comparator);
                print_student_details(student_count, students);
                break;
            case 0:
                printf("Thank you for using Student Manager!\n");
                break;
            default:
                printf("Invalid Argument!\n");
                break;
        }
    }

    free_pointer_array(student_count, students);
    return 0;
}
