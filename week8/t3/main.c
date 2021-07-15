#include <stdio.h>
#include <string.h>

typedef enum
{
   JAN = 31,
   FEB = 29,
   MAR = 31,
   APR = 30,
   MAY = 31,
   JUN = 30,
   JUL = 31,
   AUG = 31,
   SEP = 30,
   OCT = 31,
   NOV = 30,
   DEC = 31
} month_day;

const month_day enum_list[12] = {
   JAN,
   FEB,
   MAR,
   APR,
   MAY,
   JUN,
   JUL,
   AUG,
   SEP,
   OCT,
   NOV,
   DEC,
};

const char* month_names[12] = {
    "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP",
    "OCT", "NOV", "DEC"
};


int main()
{
    char month[15];
    int date;

    printf("Enter the Current date (DD MMM)(first 3 letters) >> ");
    scanf("%d %s", &date, month);

    int month_index;
    // get the month enum by the name
    for (int i = 0; i < 12; i++)
    {
        if (strcmp(month, month_names[i]) == 0)
        {
            month_index = i;
            break;
        }
    }

    // printf("The current month has %d days.\n", enum_list[month_index]);
    // printf("The current month has %d days.\n", (int)enum_list[month_index]);

    month_day current = enum_list[month_index];

    // change month if we're on the last date
    if (date == (int)current)
    {
        date = 1;
        month_index = (month_index + 1) % 12;
        printf("Next Date >> %d %s\n", date, month_names[month_index]);
    }
    else
    {
        date++;
        printf("Next Date >> %d %s\n", date, month_names[month_index]);
    }

    return 0;
}
