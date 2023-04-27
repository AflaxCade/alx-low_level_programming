#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: pointer to the head node of the list
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		current = current->next;
	}

	return (count);
}
