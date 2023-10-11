#include "hash_tables.h"

/**
 * hash_table_set - adds an elemwnt to a hash table
 *
 * @ht: the hash table
 * @key: a unique identifier for a value
 * @value: the data to be stored
 *
 * Return: 1 on success and 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *my_node = NULL;
	char *my_key = NULL, *my_value = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	my_value = strdup(value);
	my_key = strdup(key);
	if (!my_value || !my_key)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	if (ht->array[i] && (*ht->array[i]->key) == *key)
	{
		free(ht->array[i]->value);
		ht->array[i]->value = my_value;
		return (1);
	}
	my_node = malloc(sizeof(hash_node_t));
	if (!my_node)
		return (0);
	my_node->key = my_key;
	my_node->value = my_value;

	if (ht->array[i])
		my_node->next = ht->array[i];
	ht->array[i] = my_node;
	return (1);
}
