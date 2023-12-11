#include "sll.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


List list_ctor()
{
    return (List){.first = NULL};
}

Item *item_ctor(Object data)
{
    Item *i = malloc(sizeof(*i));
    if(i != NULL){
        i->data = data;
        i->next = NULL;
    }
    return i;
}
 

void list_insert_first(List *list, Item *i)
{
    i->next = list->first;
    list->first = i;
}


bool list_empty(List *list)
{
    return (list->first == NULL);
}
 
void list_delete_first(List *list)
{
    if (list_empty(list)) {
        return;  
    }
    Item *temp = list->first->next;
    free(list->first);
    list->first = temp;
}

unsigned list_count(List *list)
{
    unsigned count = 0;

    if (list_empty(list)) {
        return count;
    }

    Item *current = list->first;
    
    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}
 
//---------------------------------------------------------
/*Item *list_find_minid(List *list)
{
    if (list_empty(list)) {
        return NULL;
    }

    Item *min_item = list->first;
    Item *current = list->first->next;

    while (current != NULL) {
        if (current->data.id < min_item->data.id) {
            min_item = current;
        }
        current = current->next;
    }

    return min_item;
}

Item *list_find_name(List *list, char *name)
{
    if (list_empty(list) || name == NULL) {
        return NULL;
    }

    Item *current = list->first;

    while (current != NULL) {
        if (strcmp(current->data.name, name) == 0) {
            return current;
        }
        current = current->next;
    }

    return NULL;
}*/
//-------------------------------------------------------------

void list_dtor(List *list)
{
    while(list->first != NULL){
        list_delete_first(list);
    }
}