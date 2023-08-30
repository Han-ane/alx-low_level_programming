#include "lists.h"

/**
 * add_nodeint_end - adds a node in the end of a linked list
 * @head: pointer to the firs node in the list
 * @n: valeu to insert in the new element
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_node = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (!head || !nw_node)
		return (NULL);

	nw_node->n = n;
	nw_node->next = NULL;

	if (*head == NULL)
	{
		*head = nw_node;
		return (nw_node);
	}

	while (node->next)
		node = node->next;

	node->next = nw_node;

	return (nw_node);
}
