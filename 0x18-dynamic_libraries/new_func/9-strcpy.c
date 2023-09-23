#include "main.h"

/**
 *_strcpy - to copy a string using pointers
 *
 *@dest: where to copy into
 *@src: string to copy
 *
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int block = 0;

	while (src[block] != '\0')
	{
		dest[block] = src[block];
		block++;
	}
	dest[block] = '\0';

	return (dest);

}
