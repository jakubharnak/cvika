#include <stdio.h>
unsigned long vypocet (unsigned long a, unsigned long b) {
if (a * b == 0) return 0; // Misto A
if (a < b) {
a^=b; b^=a;a ^= b; // Misto B
}
return (a % b > 0) ? vypocet(b, a % b) : b; // Misto C
}

int main(void) {
    unsigned long x = 35;
    unsigned long y = 10;
    printf("%lu", vypocet(x, y));

    return 0;
}