#include "lists.h"

/**
 * list_len - to find how many node are there in a list
 * @h: SLL
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
