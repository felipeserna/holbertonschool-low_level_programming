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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++, i++)
		{
			if (haystack[i] == needle[j])
			{
				break;
			}
			else if (haystack[i] != '\0')
			{
				break;
			}
			else if (needle[i] != '\0')
			{
				break;
			}
		}
		if (haystack[i] == needle[j])
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
