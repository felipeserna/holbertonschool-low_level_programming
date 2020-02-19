#include "holberton.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: Letter to check
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	if (i % 2 == 0)
	{
		for (i = i / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		n = (i - 1) / 2;
		for (i = i - n; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
