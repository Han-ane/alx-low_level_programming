#include "lists.h"

/**
 * print_listint - print a linkked list
 * @h: pointer the linked list of listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
		j++;
		h = h->next;
	}

	return (j);
}
