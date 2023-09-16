#include "lists.h"

/**
 * add_dnodeint - adds a new node to the begining of a list
 *
 * @head: the current head of the list
 * @n: the valuse the new node will hold
 *
 * Return: The address of the new node created
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	new_node->prev = NULL;
	tmp = *head;

	if (tmp)
	{
		while (tmp->prev)
			tmp = tmp->prev;
	}
	new_node->next = tmp;

	if (tmp)
		tmp->prev = new_node;
	*head = new_node;

	return (new_node);
}
