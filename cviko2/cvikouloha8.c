#include <stdio.h>

int main(void) {

 int arr[5];

 printf("Select 5 numbers: ");
 for (int i = 0; i < 5; i++) {
 scanf("%d", &arr[i]);
 }

 printf("reversed \n");
 for (int i = 4; i >= 0; i--) {
 printf("%d ", arr[i]);
 }
 printf("\n");

 int max = arr[0];
 int min = arr[0];
 for (int i = 1; i < 5; i++) {
 if (arr[i] > max) {
 max = arr[i];
 }
 if (arr[i] < min) {
 min = arr[i];
 }
 }
 printf("%d is the maximum of the array values.\n", max);
 printf("%d is the minimum of the array values.\n", min);

 return 0;
 }