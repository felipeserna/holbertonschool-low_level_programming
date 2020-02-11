#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: Letter to check
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	int result;

	if ((n > 0) || (n == 0))
	{
		result = n * 1;
		return (result);
		}
	else
	{
		result = n * (-1);
		return (result);
	}
}
