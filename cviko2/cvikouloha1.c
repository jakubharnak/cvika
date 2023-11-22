#include <stdio.h>
#include <math.h>

 int main(void) {
 int a, b, c, discriminant;
 double x1, x2;

 // Use %f to read float numbers
 printf("Select three integer numbers: ");
 scanf("%d %d %d", &a, &b, &c);

 // We need to check if the equation is indeed quadratic
 if (a == 0) { // if (!a)
 printf("Error: The supplied coefficient 'a' = 0!\n");
 return 1;
 }


 discriminant = b * b - 4 * a * c;
 if (discriminant < 0) {
 printf("The quadratic equation has no roots.\n");
 } else if (discriminant == 0) {
 x1 = -b / (2.0 * a); // Explicit type cast: (double)(2 * a)
 printf("The quadratic equation has only one root: x1=%lf\n", x1);
 } else {
 x1 = (-b + sqrt(discriminant)) / (2 * a);
 x2 = (-b - sqrt(discriminant)) / (2 * a);
 printf("The quadratic equation has the following roots: x1=%lf, x2=%lf\n", x1, x2);
 }

 return 0;
}