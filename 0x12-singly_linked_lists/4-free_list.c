#include "lists.h"

/**
 * free_list - frees memory allocated for link list
 * @head: the begining of a new linked list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
