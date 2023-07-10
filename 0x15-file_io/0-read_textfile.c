#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and
 *                 prints it to the POSIX standard output
 * @filename:File we want to read from
 * @letters: Numbers of bytes of characters in the file
 * Return: if successful, the actual number of letters
 *         it could read and print
 *         if the file can not be opened or read, return 0
 *         if filename is NULL return 0
 *         if write fails or does not write the expected
 *         amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wt;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wt = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wt == -1 || wt != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wt);
}
