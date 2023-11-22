#include <stdio.h>

struct date_t{
    int year;
    int month;
    int day;
};

struct time_t{
    int hour;
    int min;
    int sec;
};

int is_valid_date(struct date_t date){
    if (date.year < 1582 || date.year > 2500 || date.month < 1 || date.month > 12 || date.day < 1 || date.day > 31)
    {
        return 0;
    }

    if (date.day == 31 && date.month != 1 && date.month != 3 && date.month != 5 && date.month != 7 && date.month != 8&& date.month != 10 && date.month != 12)
        return 0;
    else 
        if (date.month == 2){
            if (date.day == 30)
                return 0;
            else if (date.day == 29 && (!( date.year % 4 == 0 && date.year % 100 != 0 ) || date.year % 400 == 0 ) )
                return 0;   
        }
    return 1;
}
// Find the earlier date by comparing years, months and days
// Return 0 = date1 is earlier, 1 = date2 is earlier, 2 = same date
int earlier_date (struct date_t date1, struct date_t date2) {
// Compare the years first
if (date1.year < date2.year) {
    return 0;
} else if (date1.year > date2.year) {
    return 1;
}
// The year is the same, compare months
if (date1.month < date2.month) {
    return 0;
} else if (date1.month > date2.month) {
    return 1;
}
// The month is the same, compare days
if (date1.day < date2.day) {
    return 0;
} else if (date1.day > date2.day) {
    return 1;
}
// The dates are the same
return 2;
}

int main () {
    struct date_t date1, date2;
    // Load two dates from the user
    printf("Please_specify_the_first_date_(format_yyyymm_dd) : _");
    scanf("%d_%d_%d", &date1.year, &date1.month, &date1.day );
    printf("Please_specify _the_second_date_(format_yyyy mm_dd): _");
    scanf ("%d_%d _%d", &date2.year, &date2.month, &date2.day );
    // Check that the dates are valid
    if (!is_valid_date(date1) || !is_valid_date (date2)) {
        printf (" Invalid_date!\n");
        return 1;
    }

// Compare the dates and find the earlier one
    int earlier = earlier_date(date1, date2);
    if (earlier == 0) {
        printf("The_date_%d/%d/%d_is_earlier.\n", date1.year, date1.month, date1.day );
    } else if (earlier = 1) {
        printf("The_date%d/%d/%d_is_earlier.\n", date2.year, date2.month, date2.day );
    } else {
        printf("The_dates_are_the_same.\n");
    }
    return 0;
}