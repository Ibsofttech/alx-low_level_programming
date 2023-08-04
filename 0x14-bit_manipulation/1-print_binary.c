#include "main.h"

/**
 * print_binary - functiom that convert from  binary to decimal
 * @n: Number to be converted to ddcimal
 * Return: no return type
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
