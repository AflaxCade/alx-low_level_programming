#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - Defines a node in a singly linked list
 * @str: string stored in the node
 * @len: length of the string
 * @next: pointer to the next node in the list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LISTS_H */
