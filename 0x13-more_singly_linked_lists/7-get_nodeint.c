#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns nth term of the list
 * @head: head node
 * @index: index of the node
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i;

	if (!head)
		return (0);
	for (i = 0; ptr; i++)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
	}
	return (NULL);
}
