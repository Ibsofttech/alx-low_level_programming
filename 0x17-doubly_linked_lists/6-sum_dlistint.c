#include "lists.h"

/**
 * sum_dlistint - sum up all the elements in the list
 *
 * @head: the head
 *
 * Return: the sum of all the elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
