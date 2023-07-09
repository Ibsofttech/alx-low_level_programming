#include "main.h"

/**
 * flip_bit - A function that returns the number of bits you would
 *            need to flip to get from one number to another.
 * @n: The number to be flipped
 * @m: The number to flip to
 *
 * Return: the number of bit to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	int count;

	difference = n ^ m;
	count = 0;

	while (difference)
	{
		count++;
		difference &= (difference - 1);
	}

	return (count);
}
