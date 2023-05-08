#include "main.h"

/**
 * _error - A function that Read file.
 * @e: number of errors
 * @filename: File name
 */

void _error(int e, char *filename)
{
	if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * cp -A function thart  Copies the content of a file to another file.
 * @file_from: Name of the source file.
 * @file_to: Name of the destination file.
 * Return: 1 on success, -1 on failure.
 */

void cp(char *file_from, char *file_to)
{
	int fp_read, res_r, fp_write, res_w;
	char *buffer[1024];

	/* READ */
	fp_read = open(file_from, O_RDONLY);
	if (fp_read < 0)
		_error(98, file_from);
	/* WRITE */
	fp_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fp_write < 0)
	{
		close(fp_read);
		_error(99, file_to);
	}
	do {
		/* READ */
		res_r = read(fp_read, buffer, 1024);
		if (res_r < 0)
			_error(98, file_from);
		/* WRITE */
		res_w = write(fp_write, buffer, res_r);
		if (res_w < res_r)
			_error(99, file_to);
	}	while (res_w == 1024);
	if (close(fp_read) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_read);
		close(fp_write);
		exit(100);
	}
	if (close(fp_write) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_write);
		exit(100);
	}
}

/**
 * main -a function that Copies the content of a file to another file.
 * @argc: Argument count
 * @argv: argument values
 * Return: 0 on succes, -1 on error.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
