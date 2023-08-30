#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to the first node in the list
 * @index: index of node to delete
 *
 * Return: 1(Success, or -1 Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *current = NULL;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (n < index - 1)
	{
		if (!node || !(node->next))
			return (-1);
		node = node->next;
		n++;
	}


	current = node->next;
	node->next = current->next;
	free(current);

	return (1);
}
