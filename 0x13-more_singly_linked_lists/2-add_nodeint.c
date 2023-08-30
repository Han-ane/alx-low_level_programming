#include "lists.h"

/**
 * add_nodeint - adds a new node to the top
 * @head: pointer  the first node in the list
 * @n: value in that new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_node;

	nw_node = malloc(sizeof(listint_t));
	if (!head || !nw_node)
		return (NULL);

	nw_node->n = n;
	nw_node->next = *head;
	*head = nw_node;

	return (nw_node);
}
