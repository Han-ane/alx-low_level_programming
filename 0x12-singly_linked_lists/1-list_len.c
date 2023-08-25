#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns to the total number of elements in a linked list
 * @h: A pointer to the list_t list
 *
 * Return: The number elements in the list h
 */
size_t list_len(const list_t *h)
{
size_t a = 0;
while (h)
{
a++;
h = h->next;
}
return (a);
}
