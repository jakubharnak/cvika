#include <stdio.h>
// Using pointers as arguments, we can use the return values to
// indicate possible errors or exceptions while still supplying
// some useful data back to the user
// E.g .: return value = ok / error; quotient = the division result
int div(int dividend, int divisor, double *quotient){
    if (divisor == 0)
        return 0;
    *quotient = (double) dividend / divisor ;
    return 1;
}
int main (){
    int dividend, divisor ;
    double quotient ;
    printf("Please_select_the_dividend_and_divisor : ");
    scanf ("%d %d", &dividend, &divisor);
    if (! div (dividend, divisor, &quotient)){
        printf(" Division_by_zero!\n");
        return 1;
    }
    printf("%d / %d = %f\n", dividend, divisor, quotient );

    return 0;
}