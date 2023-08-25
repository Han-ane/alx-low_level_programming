#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 * @h: A pointer to the list_t list to be printed.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
size_t a = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
a++;
}
return (a);
}
