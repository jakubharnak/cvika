#include <stdio.h>

void add_one_bad(int val){
    val +=1;
}

void add_one(int *val){
    *val +=1;
}

int main(){
    int value = 10;

    printf("valueBAD: %d \n", value);
    add_one_bad(value);
    printf("after valueBAD: %d \n", value);

    printf("value: %d \n", value);
    int *value_ptr = &value;

    add_one(value_ptr);
    printf("after value: %d \n", value);

    printf("value: %d \n", value);
    add_one(&value);
    printf("after value: %d \n", value);

}