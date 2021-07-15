#include <stdio.h>
#include "utils.h"

/*
 * Program to traverse an array in reverse order using both pointers and indices.
 */

int main()
{
    // get the array from the user
    int element_count;
    printf("Enter the Number of elements you want in your array > ");
    scanf("%d", &element_count);

    int user_array[element_count];
    for(int i = 0; i < element_count; i++)
    {
        printf("Enter element number %d > ", i+1);
        scanf("%d", &user_array[i]);
    }

    printf("Traversing by Index > \n");
    ReverseTraverseByIndex(user_array, element_count);
    printf("Traversing by Index > \n");
    ReverseTraverseByPointer(user_array, element_count);
}
