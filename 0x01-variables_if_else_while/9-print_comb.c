#include <stdio.h>

/**
* main - Lanzador.
*
* Return: Always 0.
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar (i);
		if (i == '9')
		{
			putchar ('\n');
			return (0);
		}
		putchar (',');
		putchar (' ');
	}
}
