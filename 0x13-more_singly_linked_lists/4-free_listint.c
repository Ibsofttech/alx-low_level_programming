#include "lists.h"

/**
 * free_listint - Function to free space allocated to link list
 * @head: pointer
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
