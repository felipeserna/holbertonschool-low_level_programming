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
	int f, d, s;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * letters);

	if (!buffer)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	d = read(f, buffer, letters);

	if (d == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	if (!filename)
		return (0);

	s = write(STDOUT_FILENO, buffer, d);

	if (s == -1 || s !=d)
	{
		free(buffer);
		close(f);
		return (0);
	}

	free(buffer);
	close(f);
	return (s);
}
