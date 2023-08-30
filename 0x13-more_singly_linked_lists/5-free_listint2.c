#include "lists.h"

/**
 * free_listint2 - frees a a listint_t list.
 * @head: pointer the first node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = (*head)->next;
		*head = node;
		free(node)
	}

	*head = NULL;
}
