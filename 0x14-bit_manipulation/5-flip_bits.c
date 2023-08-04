#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 *             flip to get from one number to another.
 * @n: The number to be flipped
 * @m: The number to flip to
 *
 * Return: the number of bit to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differ;
	int count_num;

	differ = n ^ m;
	count_num = 0;

	while (differ)
	{
		count_num++;
		differ &= (differ - 1);
	}

	return (count_num);
}
