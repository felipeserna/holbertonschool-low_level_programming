#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: integer
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	mask <<= 63;
	for (; !(n & mask); )
	{
		mask >>= 1;
	}

	for (; mask; )
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			mask >>= 1;
		}
		else
		{
			_putchar('0');
			mask >>= 1;
		}
	}
}
