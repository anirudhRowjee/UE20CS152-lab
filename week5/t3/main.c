#include <stdio.h>
#include "utils.h"

int main()
{
    Date d1, d2;
    printf("Date 1 > \n");
    GetDate(&d1);
    printf("Date 2 > \n");
    GetDate(&d2);

    char* outcome;
    int comparison_result = CompareDates(d1, d2);

    switch (comparison_result)
    {
        case 1:
            outcome = "Date 2 Occurred After Date 1.";
            break;
        case 0:
            outcome = "Date 2 and Date 1 are the same.";
            break;
        case -1:
            outcome = "Date 2 Occurred Before Date 1.";
            break;
    };
    printf("%s\n", outcome);
    return 0;
}
