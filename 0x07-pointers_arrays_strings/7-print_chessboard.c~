#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int a;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		a = i;
		for (j = 0; (haystack[i] == needle[j]) &&
			     (haystack[i] != '\0') &&
			     (needle[j] != '\0'); j++, i++)
		{
			continue;
		}
		if (needle[j] == '\0')
		{
			return (haystack = haystack + a);
		}
	}
	return (0);
}
