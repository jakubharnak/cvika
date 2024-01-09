#include <stdio.h>

int main()
{
   int a = 0;
    printf("%d\n",a);     //  => a=0
    printf("%d\n",a++);   // a++ je print a=0 a po vykonani prikazu  +1 => a=1
    printf("%d\n",++a);   // ++a je print a+1 pred vykonanim prikazu => a=2
    printf("%d\n",--a);  // --a je print a-1 pred vykonanim prikazu => a=1
    printf("%d\n",a--);  // a-- je print A ,po vykonani prikazu  a-1  => a=0
    printf("%d\n",a);   // a=0
    return 0;
}