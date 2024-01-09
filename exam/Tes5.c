#include <stdio.h>
void foo(int x) {
printf("%d\n",x);
foo(x+1);
printf("%d\n", x);
}

int main(void) {
foo(-5);
return 0;
}