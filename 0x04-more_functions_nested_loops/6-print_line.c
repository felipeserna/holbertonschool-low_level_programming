#include "holberton.h"
/**
 * print_line - draws a straight line
 * @n: Letter to check
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int j;

	if (n > 0)

	for (j = 0; j <= n; j++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
