#include <stdio.h>
#include "utils.h"


int main()
{
    // write a program to find the smallest and largest elements in an array.
    int limit;
    printf("Enter the number of elements in the array > ");
    scanf("%d", &limit);

    int numbers[limit];

    for (int i = 0; i < limit; i++)
    {
        printf("Enter the number at position %d > ", i+1);
        scanf("%d", &numbers[i]);
    }

    int smallest = FindSmallestElement(numbers, limit);
    int largest = FindLargestElement(numbers, limit);

    printf("The Smallest Element in the list is %d\n", smallest);
    printf("The Largest Element in the list is %d\n", largest);

    return 0;
}
