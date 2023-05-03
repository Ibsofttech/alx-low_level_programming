#include "lists.h"

/**
 * print_listint - Function that prints all the element of a link list
 * @h: list
 *
 * Return: number of nodes of a link list
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
