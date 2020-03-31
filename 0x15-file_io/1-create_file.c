#include "holberton.h"
/**
 * create_file - creates a file.
 * @filename: file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure or if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int o, r, w;

	if (!filename)
		return (-1);

	o = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (o == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (r = 0; text_content[r] != '\0'; r++)
	{
	}

	w = write(o, text_content, r);

	if (w == -1)
	{
		close(o);
		return (1);
	}

	close(o);
	return (1);
}
