#include <stdio.h>
#include <stdbool.h>
#include "utils.h"

bool is_even(int t)
{
    return t % 2 == 0;
}

bool less_than_22(int t)
{
    return t < 22;
}


int main()
{

    int array_length, target;
    printf("Enter the length of the array >> ");
    scanf("%d", &array_length);

    int numbers[array_length];

    for (int i = 0; i < array_length; i++)
    {
        printf("Enter the number in position %d >> ", i+1);
        scanf("%d", &numbers[i]);
    }

    printf("\nEnter the Number to look for >> ");
    scanf("%d", &target);

    // prerequisite for binary search : sorting
    sort(numbers, array_length);

    /*
    for (int i = 0; i < array_length; i++)
        printf("%d\n", numbers[i]);
    */

    printf("Checking if number is present and even.. \n");
    binarysearch(
            numbers, array_length, target, 0, array_length-1, &is_even
    );
    printf("Checking if number is present an less than 22.. \n");
    binarysearch(
            numbers, array_length, target, 0, array_length-1, &less_than_22
    );

    return 0;
}
