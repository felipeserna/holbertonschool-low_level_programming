#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: Letter to check
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
