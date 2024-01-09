#include <stdio.h>
int main (){
unsigned int a = 1, b = 2, c;
c = a & b || a && b;
printf("%d", c);
return 0;

}