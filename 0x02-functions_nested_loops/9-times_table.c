#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Letter to check
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int a;
	int b;
	int result;
	int next;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			next = a * (b + 1);
			c = result / 10;
			d = result % 10;

			if (result < 10)
			{
			_putchar(result + '0');
			}
			else
			{
			_putchar(c + '0');
			_putchar(d + '0');
			}

			if ((b < 9) && (next < 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((b < 9) && (next > 9))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
