#include "holberton.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: Letter to check
 * Return: 1 is uppercase | 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
