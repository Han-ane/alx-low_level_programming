#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl_node = head;
	listint_t *fs_node = head;

	if (!head)
		return (NULL);

	while (sl_node && fs_node && fs_node->next)
	{
		fs_node = fs_node->next->next;
		sl_node = sl_node->next;
		if (fs_node == sl_node)
		{
			sl_node = head;
			while (sl_node != fs_node)
			{
				sl_node = sl_node->next;
				fs_node = fs_node->next;
			}
			return (fs_node);
		}
	}

	return (NULL);
}
