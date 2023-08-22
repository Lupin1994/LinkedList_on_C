typedef struct LinkedList Llist;

struct LinkedList
{
    int length;
    int *array;

    int value;
    int next_value;
};
void LlistPrint(Llist *entry_list);

Llist* linkedlist_create();