#include "lists.h"

/**
 * add_nodeint_end - Function that add node at the end of link list
 * @head: pointer to struct
 * @n: number integer
 *
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t)), *last = *head;

	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (!(*head))
	{
		*head = ptr;
	}
	else
	{
		while (last->next)
			last = last->next;
		last->next = ptr;
	}
	return (*head);
}
