#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converting a binary number to an unsigned integer.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, multiply = 1;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		num += (b[length] - '0') * multiply;
		multiply *= 2;
	}

	return (num);
}
