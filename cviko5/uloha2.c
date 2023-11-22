#include <stdio.h>
// Date structure
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
// Temperature measurement
struct measurement_t{
    struct date_t date;
    struct time_t time;
    float temperature;
};

struct measurement_t load_measurement () {
    struct measurement_t measurement ;
    printf("Format :_ year_month_day_hour_minute_second_temperature\n");
    scanf ("%d_%d ._ %d_%d ._ %d _%d_%f", &measurement.date.year, &measurement.date.month, &measurement.date.day, &measurement.time.hour, &measurement.time.min, &measurement.time.sec, &measurement.temperature);
    return measurement ;
}

int main () {
    struct measurement_t measurements [5];
// Load and validate 5 measurements
    for (int i = 0; i < 5; i++) {
        measurements [i] = load_measurement ();
        if (!is_valid_measurement ( measurements [i])) {
            printf (" Invalid_measurement !\n");
            return 1;
        }
    }
// Compute e.g., average temperature
    float sum = 0.0;
    for (int i = 0; i < 5; i++) {
        sum += measurements [ i ]. temperature ;
    }
    printf (" Average_temperature: _%f.\n", sum / 5);
    
    return 0;
}