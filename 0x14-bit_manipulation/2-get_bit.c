#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: index, starting from 0 of the bit you want to get.
 * Return: value of the bit at index "index" or -1 if an
 * error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	n = n >> index & 1;
	if (n != 1)
		return (0);
	return (1);
}
