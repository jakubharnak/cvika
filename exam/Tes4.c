#include <stdio.h>

void zobrazeni(unsigned long long cislo, unsigned short arg_bitu) // Místo A
{
    if (arg_bitu > 2)
        zobrazeni(cislo >> 2, arg_bitu - 2);

    printf("%llu%llu ", cislo & 1, (cislo >> 1) & 1);
}

int main(void)
{
    unsigned short pom = 121;
    zobrazeni(pom, sizeof(pom) * 8); // Místo B
    // předpokládejte, že velikost typu short je 2 bajty

    return 0;
}
