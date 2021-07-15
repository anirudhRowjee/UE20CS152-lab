#include <stdio.h>
#include "utils.h"


int mod(int quantity)
{
    if (quantity > 0)
    {
        return 1;
    }
    else if (quantity < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

/*
 * This function tells us whether date2 is equal to, greater than 
 * or lesser than date1
 * ----------------------------
 * After => returns 1
 * On => returns 0
 * Before => returns -1
 */
int CompareDates(Date date1, Date date2)
{
    // compare two dates
    Date relativeDate = {
        mod(date2.year - date1.year),
        mod(date2.month - date1.month),
        mod(date2.day - date1.day),
    };

    switch (relativeDate.year) 
    {
        case 1:
            return 1;
            break;
        case -1:
            return -1;
            break;
        case 0:
            switch (relativeDate.month)
            {
                case 1:
                    return 1;
                    break;
                case -1:
                    return -1;
                    break;
                case 0:
                    switch (relativeDate.day)
                    {
                    case 1:
                        return 1;
                        break;
                    case -1:
                        return -1;
                        break;
                    case 0:
                        return 0;
                        break;
                    }
            }
            break;
    }
    // we'll never reach here.
    return 10;
}


// function to get the date from the user as input
void GetDate(Date* date)
{
    printf("Enter the Date as DD/MM/YYYY >> ");
    scanf("%d/%d/%d", &date->day, &date->month, &date->year);
}
