#include "lists.h"
/**
 * add_nodeint - Function adds new node to a link list
 * @head: pointer
 * @n: integer, a element of structure
 * Return: the list with the new nodo
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added = malloc(sizeof(listint_t));


	if (!added)
		return (NULL);
	added->n = n;
	added->next = *head;
	*head = added;

	return (*head);
}
