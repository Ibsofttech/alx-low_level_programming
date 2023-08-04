#include "main.h"

/**
 * get_endianness -A function that Checks the endianness in a number.
 *
 * Return: 0 if big endians.
 *         1 if little endians.
 */
int get_endianness(void)
{
	int numb = 1;
	char *endians_num = (char *)&numb;

	if (*endians_num == 1)
		return (1);

	return (0);
}
