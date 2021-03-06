#include "holberton.h"
/**
 * prime - finds if n is prime
 * @d: divisor
 * @n: given number
 * Return: 1 if it is prime, 0 if not
 */
int prime(int d, int n)
{
	if ((n % d == 0) && n != d)
	{
		return (0);
	}
	else if ((n % d == 0) && n == d)
	{
		return (1);
	}
	else
	{
		return (prime((d + 1), n));
	}
}
/**
 * is_prime_number - finds if n is prime
 * @n: given number
 * Return: 1 if it is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (prime(2, n));
	}
	else
	{
		return (0);
	}
}
