#include <stdlib.h>
#include "lists.h"
/**
* free_list - set linked list free
* @head: the list_t list to get freed
*/
void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
