#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 * @filename: a pointer to the file.
 * @letters: Number of letter that the function should and print.
 * Return: Actual number of letters it could read and print
 *         or if the function failed it should return - NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, res_r, res_w;
	char *buffer;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	res_r = read(fp, buffer, letters);
	if (res_r == -1)
	{
		free(buffer);
		return (0);
	}
	res_w = write(STDOUT_FILENO, buffer, res_r);
	if (res_w == -1 || res_r != res_w)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fp);
	return (res_w);
}
