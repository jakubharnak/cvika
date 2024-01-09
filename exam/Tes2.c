#include <stdio.h>

int main (){

int sum = 1;
for (int i=0; i < 10; i++){
switch (i) {
case 1: case 4: case 7: sum++;
default: continue;
case 3: break;
}
break;
}
printf("%d", sum);
return 0;
}