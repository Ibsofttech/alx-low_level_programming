#include "lists.h"

/**
 * listint_len - Function return length of a SLL
 * @h: pointer
 *
 * Return: size_t length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h)
		h = h->next;
		j++;
	return (j);
}
