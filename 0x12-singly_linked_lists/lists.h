#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 *
 */
typedef struct list_s
{
    char *str;
    unsigned int length;
    struct list_s *next;
} list_t;

size_t print_custom_list(const custom_list_node *head);
size_t custom_list_length(const custom_list_node *head);
custom_list_node *insert_at_beginning(custom_list_node **head, const char *str);
custom_list_node *insert_at_end(custom_list_node **head, const char *str);
void free_custom_list(custom_list_node *head);

#endif
