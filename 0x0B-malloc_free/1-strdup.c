#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to check
 * Return: NULL if str = NULL, a pointer to the duplicated string
 * if success, NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int len;
	char *dup;
	int i;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	len++;

	dup = malloc(len * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	else if (dup == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; dup[i] < len; i++)
		{
			dup[i] = str[i];
		}
		return (dup);
	}
}
