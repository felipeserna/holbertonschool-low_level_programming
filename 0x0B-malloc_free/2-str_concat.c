#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string to concatenate
 * If NULL is passed, treat it as an empty string
 * Return: pointer pointing to a new space which contains s1,
 * followed by s2, and null. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, len1, len2, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}

	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}

	size = len1 + len2;

	s3 = malloc(size * sizeof(char) + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}

	for (j = 0; j < len2 ; j++, i++)
	{
		s3[i] = s2[j];
	}
	s3[size + 1] = '\0';
	return (s3);
}
