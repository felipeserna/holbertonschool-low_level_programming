#include "holberton.h"
/**
 * print_most_numbers - prints 0 to 9, without 2 and 4, followed by a line
 * c: Letter to check
 * Return: Nothing
 */
void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
