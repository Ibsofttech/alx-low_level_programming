#include "main.h"

/**
 * append_text_to_file - A function that  appends text at the end of a file.
 * @filename: Name of the file to append to.
 * @text_content: NULL character terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, res_w, lenght;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fp = open(filename, O_WRONLY | O_APPEND);
		if (fp == -1)
			return (-1);
		lenght = 0;
		while (*(text_content + lenght) != '\0')
			lenght++;
		res_w = write(fp, text_content, lenght);
		if (res_w == -1)
		{
			close(fp);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
