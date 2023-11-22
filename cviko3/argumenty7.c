#include <stdio.h>

int main(int argc, char *argv[]){
// argc cele cislo urcuje pocet parametrov 
// *argv[] je to pole typu char* je to dalsi sposob ako deklarovat retazec; ukazuje na pole retazcov
// char str[100] deklarovane cez pole
// char *str deklarovane ako pointer na znak;ukazuje na index; str + 1 ukazuje na znak + 1 
    if (argc < 2) {
        printf("No argument specified!\n");
        return 1;
    }
    printf("First program argument: %s\n", argv[1]);

    return 0;

}
