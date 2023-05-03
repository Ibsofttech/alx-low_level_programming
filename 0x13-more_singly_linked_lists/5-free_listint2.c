#include "lists.h"

/**
 * free_listint2 - Funtions that frees a list head equal to NULL
 *
 * @head: pointer
 *
 *Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
