#include "hash_tables.h"

/**
 * key_index - generates the index for the key using djb2
 *
 * @key: key
 * @size: the size of the Hash table
 *
 * Return: the index which the data would be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0;

	i = hash_djb2(key) % size;

	return (i);
}
