#include "main.h"

/**
 *_puts - to print out a string
 *@str: string to be printed
 *return: 0 for success
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
