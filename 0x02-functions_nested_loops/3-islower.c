#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: Letter to check
 * Return: 1 is lowercase | 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
		}
	else
	{
		return (0);
	}
}
