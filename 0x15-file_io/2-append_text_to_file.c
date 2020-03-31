#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the
 * end of the file.
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, r;

	if (!filename)
		return (-1);

	o = open(filename, O_APPEND | O_WRONLY);

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
		return (-1);
	}

	close(o);
	return (1);
}
