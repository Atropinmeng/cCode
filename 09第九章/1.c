#include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

int main()
{
    struct Date date;
    printf("Please give date: ");
    scanf("%d%d%d", &date.year, &date.month, &date.day);
    int Days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int i, days = 0;
    for (i = 1; i < date.month; i++)
        days += Days[i];
    days += date.day;
    if (date.month > 2)
    {
        if (date.year % 400 == 0 || (date.year % 4 == 0 && date.year % 100 != 0))
        {
            ++days;
        }
    }
    printf("It's day %d in the year.\n", days);
    return 0;
}