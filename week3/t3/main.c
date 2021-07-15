#include <stdio.h>
#include "utils.h"


int main()
{
    int count;
    printf("Enter the number of elements you want to add > ");
    scanf("%d", &count);

    int sample[count];
    int target[count];

    for (int i = 0; i < count; i++)
    {
        printf("Enter element %d > ", i+1);
        scanf("%d", &sample[i]);
    }

    int unique_count = LoadUniqueElements(sample, target, count);

    printf("The Unique Elements of the Array are > \n");
    for (int i = 0; i < unique_count; i++)
    {
        printf("%d ", target[i]);
    }
    printf("\n");
}

