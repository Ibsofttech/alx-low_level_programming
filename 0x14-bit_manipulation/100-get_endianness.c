#include "main.h"

/**
 * get_endianness -A function that Checks the endianness.
 *
 * Return: 0 if big endians.
 *         1 if little endians.
 */
int get_endianness(void)
{
	int number = 1;
	char *endians = (char *)&number;

	if (*endians == 1)
		return (1);

	return (0);
}
