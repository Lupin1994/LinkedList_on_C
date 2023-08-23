#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "One_linked_list.h"

int main()
{
    TLinkedListItem *new_list = linked_list_create();
    linked_list_print(new_list);
}

