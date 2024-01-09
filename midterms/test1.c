#include <stdio.h>
int a = 4, b = 5;
void test(int *c) {
  int a = *c;
  printf("%d %d ", a, b);
  if (a > b) {
    a = b;
  } else {
    int b = a;
    printf("%d %d ", a, b);
  }
  *c = a;
}

int main(void) {
  int b = 8;
  printf("test1\n");
  printf("%d %d ", a, b);
  test(&b);
  printf("%d %d ", a, b);


  printf("\n\n");
  printf("test2\n");

  for (int i = -5; ++i;) printf(" -5 hodnota i je %d \n", i++);
  for (int i = 7; --i;) printf("  7 hodnota i je %d \n", i--);
  for (int i = -6; i++;) printf(" -6 hodnota i je %d \n", i++);  
  for (int i = 9; --i;) printf("  9 hodnota i je %d \n", i--);
  for (int i = -3; ++i;) printf(" -3 hodnota i je %d \n", i);
  for (int i = -1; i++;) printf(" -1 hodnota i je %d \n", i);
  for (int i = 4; --i;) printf(" 4 hodnota i je %d \n", i);



  return 0;
}