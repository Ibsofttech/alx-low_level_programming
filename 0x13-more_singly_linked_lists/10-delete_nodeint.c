#include "lists.h"

/**
 * delete_nodeint_at_index - Function that delete a node at a specific index
 * @head: node head
 * @index: index
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *actual = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		j++;
	}


	actual = temp->next;
	temp->next = actual->next;
	free(actual);

	return (1);
}
