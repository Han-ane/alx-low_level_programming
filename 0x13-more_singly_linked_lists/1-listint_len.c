#include "lists.h"

/**
 * listint_len - returns the number in a linked lists
 * @h: pointer the linked list of type listint_t
 *
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
