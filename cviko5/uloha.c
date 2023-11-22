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
    struct measurement_t measurement;
    printf("Format : year_month_day_hour_minute_second_temperature\n");
    scanf ("%d %d %d %d %d %d %f", &measurement.date.year, &measurement.date.month, &measurement.date.day, &measurement.time.hour, &measurement.time.min, &measurement.time.sec, &measurement.temperature);
    return measurement;
}




int is_valid_measurement(struct measurement_t measurement){
    struct date_t date = measurement.date;
    struct time_t time = measurement.time;

    if (date.year < 1900 || date.year > 2100 || date.month < 1 || date.month > 12 || date.day < 1 || date.day > 31)
    {
        return 0;
    }

    if (date.day == 31 && date.month != 1 && date.month != 3 && date.month != 5 && date.month != 7 && date.month != 8 && date.month != 10 && date.month != 12)
    {
        return 0;
    } else if(date.day == 29 && date.month == 2 && (!(date.year   % 4 == 0 && date.year  % 100 != 0 ) || date.year   % 400 == 0)){
        return 0;
    }

    if (time.hour < 0 || time.hour > 23 || time.min < 0 || time.min > 59 || time.sec < 0 || time. sec > 59) {
        return 0;
    }

    return 1;
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
        sum += measurements[ i ].temperature;
    }
    printf (" Average_temperature: %f.\n", sum / 5);

   // Find the maximum temperature
    float max_temperature = measurements[0].temperature;
    for (int i = 0; i < 5; i++) {
        if (measurements[i].temperature > max_temperature) {
            max_temperature = measurements[i].temperature;
        }
    }
    // Print the maximum temperature
    printf("Maximum temperature: %f.\n", max_temperature);

    
    return 0;
}