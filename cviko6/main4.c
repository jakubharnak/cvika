#include <stdio.h>

// Accept two double values that will be swapped - using their addresses!
void swap (double *val1, double *val2){
    double tmp = *val1;
    *val1 = *val2;
    *val2 = tmp;
}
int main (){
    double value1, value2;
    printf("Please_select_two_double_values :_ ");
    scanf("%lf %lf", &value1, &value2);

    printf("Pre-swap :_ value1: %f; _value2: %f\n", value1, value2);
    swap(&value1, &value2);
    printf("Post-swap :_ value1: %f; _value2 : %f\n", value1, value2);

    return 0;
}