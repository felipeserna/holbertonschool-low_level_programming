#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: Letter to check
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i--;

	for (j = i; s[j] > 0; j--)
	{
	_putchar(s[j]);
	}
	_putchar('\n');
}
