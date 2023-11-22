#include <stdio.h>
#include <stdlib.h>

typedef struct {
int *items;
unsigned int size;
}vector_t;

int *resize(int *arr, unsigned int new_size){
    int *new_arr = (int *) realloc (arr, new_size * sizeof(int));
    if (new_arr == NULL) {
        free (arr );
        return NULL;
    }
    return new_arr;
}

void vector_dtor (vector_t *vector) {
    if (vector == NULL) {
        return;
    }
    if (vector->items != NULL) {
        free (vector->items);
    }
    free (vector);
}

vector_t *vector_ctor(){
    vector_t *vec = (vector_t *)malloc(sizeof(vector_t));
    if (vec != NULL)
    {
        vec->size = 0;
        vec->items = NULL;
    }
    return vec;
}

int vector_add (vector_t *vec, int value) {
    vec->items = resize (vec->items, vec->size + 1);
    if (vec->items == NULL) {
        return 0;
    }
    vec->items [vec->size] = value;
    vec->size += 1;
    return 1;
}

int main() {
    vector_t *vec1 = vector_ctor();
    vector_t *vec2 = vector_ctor();

    int num1, num2;
    scanf("%d %d", &num1, &num2);
    vector_add(vec1, num1);
    vector_add(vec2, num2);

    /*scanf("%d %d", &num1, &num2);
    vector_add(vec2, num1);
    vector_add(vec2, num2);*/

    vector_t *sumVec = vector_ctor();
    for (unsigned int i = 0; i < vec1->size; i++) {
        vector_add(sumVec, vec1->items[i] + vec2->items[i]);
    }

    printf("Print suctu vektoru\n");
    for (int i = sumVec->size - 1; i >= 0; i--) {
        printf("%d ", sumVec->items[i]);
    }
    printf("\n");

    vector_dtor(vec1);
    vector_dtor(vec2);
    vector_dtor(sumVec);

    return 0;
}
