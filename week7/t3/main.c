#include <stdio.h>
#include "utils.h"

int main()
{

    int count;
    printf("Enter the number of items in the list >> ");
    scanf("%d", &count);

    int temp[count];
    for (int i = 0; i < count; i++)
    {
        printf("Enter the number at index %d >> ", i);
        scanf("%d", &temp[i]);
    }

    bubblesort(temp, count);

    printf("The sorted list is >> \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d\t", temp[i]);
    }
    printf("\n");

    return 0;
}
