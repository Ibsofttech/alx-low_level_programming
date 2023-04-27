#include "lists.h"

/**
 * print_list - prints all elements of a structure list_t list
 * @h: a pointer to access the elemet of the structure
 * Return: node numbers in the list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
