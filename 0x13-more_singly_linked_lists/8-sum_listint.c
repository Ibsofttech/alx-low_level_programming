#include "lists.h"

/**
 * sum_listint - Function that sum lists
 * @head: head node
 *
 * Return: my_sum
 */
int sum_listint(listint_t *head)
{
	int my_sum = 0;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			my_sum += head->n;
			head = head->next;
		}
		my_sum += head->n;
		return (my_sum);
	}
	return (my_sum);
}
