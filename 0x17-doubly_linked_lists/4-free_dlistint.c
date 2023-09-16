#include "lists.h"

/**
 * free_dlistint - freea up the entire list
 *
 * @head: the begining of the list
 *
 * Return: NULL
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
