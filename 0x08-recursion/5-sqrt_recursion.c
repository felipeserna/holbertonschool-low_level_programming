#include "holberton.h"
/**
 * root - square root
 * @x: given number
 * @sqroot: square root
 * Return: square root
 */
int root(int sqroot, int x)
{
	if (x == sqroot * sqroot)
		return (sqroot);
	else if (sqroot * sqroot < 0 || sqroot * sqroot > x)
		return (-1);
	return (root(sqroot + 1, x));
}
/**
 * _sqrt_recursion - returns the natural square root
 * @n: given number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (root(0, n));
}
