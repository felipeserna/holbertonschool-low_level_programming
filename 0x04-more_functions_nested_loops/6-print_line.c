#include "holberton.h"
/**
 * print_line - draws a straight line
 * @n: Letter to check
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar(95);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
