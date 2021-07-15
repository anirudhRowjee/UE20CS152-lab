#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the Marks >> ");
    scanf("%d", &marks);

    if (marks < 30)
    {
        printf("The Student has failed.\n");
    }
    else
    {
        if (marks >= 30 && marks <= 40)
        {
            printf("Grade D\n");
        }
        else if (marks > 40 && marks <= 60)
        {
            printf("Grade C\n");
        }
        else if (marks > 60 && marks <= 85)
        {
            printf("Grade B\n");
        }
        else if (marks > 85 && marks <= 100)
        {
            printf("Grade A\n");
        }
        else
        {
            printf("The Student cannot have more than 100 marks.\n");
        }
    }

    return 0;
}

