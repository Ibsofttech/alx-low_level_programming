#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table
 * Return: no return value
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp1;
	hash_node_t *temp2;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		temp1 = ht->array[index];
		while ((temp2 = temp1) != NULL)
		{
			temp1 = temp1->next;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}
	}
	free(ht->array);
	free(ht);
}
