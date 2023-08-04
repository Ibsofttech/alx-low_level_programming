#include "main.h"

/**
 * clear_bit - A Function that sets sets the value of a
 *             bit to 0 at a given index.
 * @n: A pointer to the bit to set to zero
 * @index: The index to set the value at
 *
 * Return: if error -1, on successful 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
