#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day
 * i: Letter to check
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			int a = i / 10;
			int b = i % 10;
			int c = j / 10;
			int d = j % 10;

			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(58);
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
	}
}
