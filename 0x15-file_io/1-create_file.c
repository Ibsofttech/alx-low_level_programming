#include "main.h"

/**
 * create_file - a function that Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: content of the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fp, lenght;
	ssize_t res_w;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		lenght = 0;
		while (*(text_content + lenght) != '\0')
			lenght++;
		res_w = write(fp, text_content, lenght);
		if (res_w == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
