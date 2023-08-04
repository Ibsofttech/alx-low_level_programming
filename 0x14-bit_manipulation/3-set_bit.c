#include "main.h"

/**
 * set_bit - Function to set the value of a bit at an index to 1.
 * @n: A pointer to the bit. to be set
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         on successsful- 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
