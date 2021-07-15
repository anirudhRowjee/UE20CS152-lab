
typedef struct student_details_t
{
    int roll_number;
    char* name;
} student;

// function to parse the CSV file into the array of pointers
int parse_csv_file(char* filename, student** destination);

// show all the details
void print_student_details(int count, student** student_pointer_array);

int compare_by_rollno(student* student1, student* student2);
int compare_by_name(student* student1, student* student2);

// accept a callback
void sort_student_details(
    int student_count,
    student** students,
    int (*sort_function)(student* first, student* second)
);

// memory safety
int free_pointer_array(int count, student** student_pointer_array);

