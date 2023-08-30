#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked lis
 * @head: pointer to the first node in the linked list
 *
 * Return:  0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (n);
}
