#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: the bit 
 * @index: index starting from 0, of the bit we want to get
 * Return: if an erro occurs - return -1
 *         else, return the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
