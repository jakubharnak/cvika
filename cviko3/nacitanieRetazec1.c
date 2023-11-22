#include <stdio.h>

int main() {
  char str1[101];
  char str2[101];

  printf("vyber retazec: ");
  scanf("%s%s", str1, str2);
  printf("\n");
  printf("napisali ste => %s %s\n", str1, str2);

  return 0;
}
