#include "lists.h"

/**
 * get_dnodeint_at_index -returns the element of a  node
 *
 * @head: the head node
 * @index: the location of the node
 *
 * Return: the element of the node at that index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (idx == index)
			break;
		head = head->next;
		idx++;
	}
	return (head);
}
