#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer the first node in the linked list
 * @index: index of node return
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *node = head;

	while (node && j < index)
	{
		node = node->next;
		j++;
	}

	return (node ? node : NULL);
}
