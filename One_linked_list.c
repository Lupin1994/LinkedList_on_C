#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "One_linked_list.h"

// void linked_list_print(TLinkedListItem *head){
//     printf("[");
//     for (int i = 0; i < entry_list->length; i++)
//     {
//         printf("%d,\t", entry_list->array[i]);
//     }
//     printf("]\n");
// }

TLinkedListItem* linked_list_create(){

    TLinkedListItem *head = (TLinkedListItem*) malloc(sizeof(TLinkedListItem));
    head->value = NULL;
    head->next_item = NULL;
    return head;
}

void linked_list_add(TLinkedListItem *head, int value){
    if (head->value == NULL)
    {
        head->value = value;
        return;
    }

    TLinkedListItem *new_item = (TLinkedListItem*) malloc(sizeof(TLinkedListItem));
    new_item->value = value;
    new_item->next_item = NULL;

    TLinkedListItem *current_item = head;
    while (current_item->next_item != NULL)
    {
        current_item = current_item->next_item;
    }
    current_item->next_item = new_item;
}