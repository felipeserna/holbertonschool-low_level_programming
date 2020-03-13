#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: if n is 0 return 0, otherwise return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, unsigned int);
	}

	va_end(valist);

	return (sum);
}
