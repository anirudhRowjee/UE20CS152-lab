#include <stdio.h>

int main()
{
    int day_limits[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int day, month, year;

    printf("Enter the day >> ");
    scanf("%d", &day);
    printf("Enter the month >> ");
    scanf("%d", &month);
    printf("Enter the year >> ");
    scanf("%d", &year);

    // check for leap year
    if ( year > 0 && year % 4 == 0 && year % 400 == 0)
    {
        day_limits[1] = 29;
    }

    if ((year >= 0) && 
            (month >= 1 && month <= 12) && 
            (day >= 1 && day <= day_limits[month-1])
        )
    {
        printf("Date is Valid.\n");
    }
    else
    {
        printf("Date is Invalid\n");
    }


    return 0;
}

