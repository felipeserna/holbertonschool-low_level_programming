#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: array of type char
 * Return: str
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char ws[] = " \t\n,;.!\?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ws[j] != '\0'; j++)
		{
			if (str[i] == ws[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
			else if (i == 0)
			{
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}
	return (str);
}
