#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @c: array of characters
 * @size: unsigned integer
 * Return: NULL if size is 0 or fails, s if successful
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size) * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (s == NULL)
	{
		return (NULL);
	}

	else
	{
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
	}
}
