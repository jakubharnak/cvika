#include <stdio.h>
#include <string.h>

int main() {
  // 1. Načítanie reťazca
  char retazec[100];
  printf("1 - Zadajte retazec: ");
  scanf("%s", retazec);

  // 2. Vypísanie reťazca
  printf("2 - Retazec je: %s\n", retazec);

  // 3. Vypísanie reťazca naopak
  int dlzka = strlen(retazec);
  printf("3 - Otoceny retazec: ");
  for (int i = dlzka - 1; i >= 0; i--) {
    printf("%c", retazec[i]);
  }
  printf("\n");

  return 0;
}
