#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list that be freed
 */
void free_list(list_t *head)
{
list_t *time;
while (head)
{
time = head->next;
free(head->str);
free(head);
head = time;
}
}
