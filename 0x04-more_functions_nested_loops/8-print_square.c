#include "holberton.h"
/**
 * print_square - prints a square
 * @size: Letter to check
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
