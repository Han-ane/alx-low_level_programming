#include "lists.h"
#include <stdid.h>
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Calcule the number of the nodes
 * @head: pointer to the head of the listint_t
 * @new: add new node in the list
 *
 * Retun: 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *take, *one;
	size_t i = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	take = head->next;
	one = (head->next)->next;

	while (one)
	{
		if (take == hare)
		{
			take = head;
			while (take != one)
			{
				i++;
				take = take->next;
				one = one->next;
			}

			take = take->next;
			while (take != one)
			{
				i++;
				take = take->next;
			}

			return (i);
		}

		take = take->next;
		one = (one->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head:  pointer to the start of the listint_t list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, index = 0;

	i = looped_listint_len(head);

	if (i == 0)
	{
		for (; head != NULL; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < i; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (i);
}
