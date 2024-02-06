#include <stdio.h>
void myPrint (int n)
{
printf ("%d\n", n);
printf ("begin:%d\n", n%2);
if (n > 0){ // Místo A
    printf("reeee\n");
    myPrint (n - 1);} // Místo B
return;
}

int main (void){

int count = 4;
myPrint (count);
return 0;

}