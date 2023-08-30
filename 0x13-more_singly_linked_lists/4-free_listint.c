#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head:pointer the first listint_t list to be freed
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
