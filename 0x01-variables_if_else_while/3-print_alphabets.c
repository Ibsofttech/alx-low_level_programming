#include <stdio.h>

/**
 * main - ibrahim.
 *
 * Return: Always 0.
 */

int main(void)
{
	char i, j;

	for (i = 'a', j = 'A'; i <= 'z', j <= 'Z'; i++, j++)
	{
		putchar (i);
		putchar (j);
	}
	putchar ('\n');
	return (0);
}
