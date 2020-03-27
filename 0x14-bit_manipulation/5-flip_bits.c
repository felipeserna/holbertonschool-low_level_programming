#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: integer
 * @m: integer
 * Return: read above
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != m)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}

		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
