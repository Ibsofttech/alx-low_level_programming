#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: input numbers to be coverted to binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int sht;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, sht = 0; (temp >>= 1) > 0; sht++)
		;

	for (; sht >= 0; sht--)
	{
		if ((n >> sht) & 1)
			printf("1");
		else
			printf("0");
	}
}
