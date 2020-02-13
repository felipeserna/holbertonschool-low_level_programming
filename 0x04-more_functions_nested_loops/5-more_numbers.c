#include "holberton.h"
/**
 * more_numbers - prints 10 times 0 to 14, followed by a new line
 * c: Letter to check
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int j;
	int a;
	int b;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			a = i / 10;
			b = i % 10;
			if (i > 9)
			{
				_putchar(a + '0');
				_putchar(b + '0');
			}
			else
			{
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
}
