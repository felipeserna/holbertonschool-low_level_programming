#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: Letter to check
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 1; b < (size - a); b++)
			{
				_putchar(' ');
			}

			for (c = 0; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
