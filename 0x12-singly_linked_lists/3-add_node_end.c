#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - at the end of a linked list add a new node
 * @head: double pointer to the list_t list
 * @str: put a string in new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *time = *head;
unsigned int len = 0;
while (str[len])
len++;
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (time->next)
time = time->next;
time->next = new_node;
return (new_node);
}
