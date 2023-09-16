#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at an index
 *
 * @h: the head node
 * @idx: the index to insert the new node
 * @n: the value the new node will hold
 *
 * Return: the address of the new node creater or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;

	tmp = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0) /* Meaning at the begining */
		return (add_dnodeint(h, n));

	while (idx != 0 && tmp)
	{
		tmp = tmp->next;
		idx--;
	}
	if (!tmp && idx <= 0)
		return (add_dnodeint_end(h, n));

	new_node->prev = tmp->prev;
	tmp->prev->next = new_node;
	tmp->prev = new_node;
	new_node->next = tmp;

	return (new_node);
}
