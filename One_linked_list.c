#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "One_linked_list.h"

void LlistPrint(Llist *entry_list){
    printf("[");
    for (int i = 0; i < entry_list->length; i++)
    {
        printf("%d,\t", entry_list->array[i]);
    }
    printf("]\n");
}

Llist* linkedlist_create(){

    Llist *list = (Llist*) malloc(sizeof(Llist));
    list->length = 1;
    list->array = (int*) malloc(sizeof(list->length));
    return list;
}
