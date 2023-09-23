#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string to consider
 *
 * Return: Length of tge string
 */

int _strlen(char *str)
{
	int string_length = 0;

		while (str[string_length])
		string_length++;

	return (string_length);
}
