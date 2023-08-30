#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer the first node
 * @idx: index the new node is added
 * @n: valeu the  new node
 *
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *nw_node;
	listint_t *node = *head;

	nw_node = malloc(sizeof(listint_t));
	if (!nw_node || !head)
		return (NULL);

	nw_node->n = n;
	nw_node->next = NULL;

	if (idx == 0)
	{
		nw_node->next = *head;
		*head = nw_node;
		return (nw_node);
	}

	for (j = 0; node && j < idx; j++)
	{
		if (j == idx - 1)
		{
			nw_node->next = node->next;
			node->next = nw_node;
			return (nw_node);
		}
		else
			node = node->next;
	}

	return (NULL);
}
