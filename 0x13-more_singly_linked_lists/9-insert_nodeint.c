#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts node into link list
 * @head: head node
 * @idx: index
 * @n: integer
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *mainNode = *head;
	unsigned int i = 0;

	if (!ptr)
		return (free(ptr), NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(ptr);
		return (NULL);
	}

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	for (; i < idx - 1; i++)
	{
		mainNode = mainNode->next;
		if (mainNode == NULL && idx - i > 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	ptr->next = mainNode->next;
	mainNode->next = ptr;

	return (ptr);
}
