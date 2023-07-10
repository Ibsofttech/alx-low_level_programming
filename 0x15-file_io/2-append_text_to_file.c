#include "main.h"

/**
 * append_text_to_file - a function that appends text at the
 *                       end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at
 *                the end of the file
 * Return: Return: 1 on success and -1 on failure
 *                 If filename is NULL return -1
 *                 If text_content is NULL, do not add
 *                 anything to the file
 *                 1 if the file exists and -1
 *                 if the file does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wt = write(op, text_content, len);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}
