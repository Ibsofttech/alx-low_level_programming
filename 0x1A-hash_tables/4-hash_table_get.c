#include "hash_tables.h"

/**
 * hash_table_get - retrives the value from hsh table
 *
 * @ht: the hast table to look into
 * @key: the key to the value
 *
 * Return: the value associated to the key or NULL if nothing is found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;

	if (!ht || !key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);

	while (ht->array[i])
	{
		if (*(ht->array[i]->key) == *key)
			return (ht->array[i]->value);
		ht->array[i] = ht->array[i]->next;
	}
	return (NULL);
}
