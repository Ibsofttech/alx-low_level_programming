#include "lists.h"

/**
 * dlistint_len - find the number of elements in a doubly linked list
 *
 * @h: the head node
 *
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		num_node++;
		h = h->next;
	}

	return (num_node);
}
