#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: String to compare
 * @s2: String to compare
 * Return: difference of the first different characters in ascii
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int result;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		else
		{
			result = 0;
			return (result);
		}
	}
					return (0);
}
