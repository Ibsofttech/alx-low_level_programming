#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a list
 *
 * @head: the head node
 * @n: the value the new node will hold
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;

	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	else
		*head = new_node;
	new_node->prev = tmp;

	return (new_node);
}
