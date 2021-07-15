
struct date {
    int day;
    int month;
    int year;
};
typedef struct date Date;
int CompareDates(Date date1, Date date2);
void GetDate(Date* date);
