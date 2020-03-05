#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * length - length of the string
 * @s: string
 * Return: length of the string
 */
int length(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string to be appended
 * @n: the first bytes of s2
 * Return: pointer to the allocated memory for the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int x, y, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	x = length(s1);
	y = length(s2);

	if (n >= y)
	{
		n = y;
	}

	s3 = malloc((x + n + 1) * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < x; i++)
	{
		s3[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		s3[i] = s2[j];
	}
	s3[i] = '\0';
	return (s3);
}
