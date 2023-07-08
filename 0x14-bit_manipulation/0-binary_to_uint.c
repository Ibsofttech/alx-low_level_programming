#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, base = 1;
	int l;

	if (b == '\0')
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}

	for (l = l - 1; l >= 0; l--)
	{
		decimal = decimal + (b[l] - '0') * base;
		base *= 2;
	}

	return (decimal);
}
