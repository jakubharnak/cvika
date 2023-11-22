#include <stdio.h>

int main(){
    char str[101];

    printf("vyber retazec: ");
    scanf("%100s", str);
    printf("\n");
    printf("napisali ste => %s\n", str);

    int diff = 'a' - 'A';

    for (int i = 0;str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += diff;
    }
    printf("prevedeny string: %s", str);

  return 0;
}
