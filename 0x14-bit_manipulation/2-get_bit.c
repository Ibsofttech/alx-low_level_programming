#include "main.h"

/**
 * get_bit - Galculate the index of a given bit
 * @n: The bit to be calculted
 * @index: The index of the bit
 * Return: if an error occur -1, else the vlue of the bit
 *         index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);

}
