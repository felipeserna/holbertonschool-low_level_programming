#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * output.
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print.
 * 0 if:
 * - file can not be opened or read
 * - filename is NULL
 * - write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * letters);

	if (!buffer)
		return (0);

	o = open(filename, O_RDONLY);

	if (o == -1)
		return (0);

	r = read(o, buffer, letters);

	if (r == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}

	if (!filename)
		return (0);

	w = write(STDOUT_FILENO, buffer, r);

	if (w == -1 || w != r)
	{
		free(buffer);
		close(o);
		return (0);
	}

	free(buffer);
	close(o);
	return (w);
}
