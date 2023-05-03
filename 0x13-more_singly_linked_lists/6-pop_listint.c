#include "lists.h"

/**
 * pop_listint - Function that deletes the head node from a list
 * @head: head node
 *
 * Return: head node details
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int i;

	if (!*head)
		return (0);

	i = (*head)->n;
	*head = ptr->next;
	free(ptr);
	return (i);
}
