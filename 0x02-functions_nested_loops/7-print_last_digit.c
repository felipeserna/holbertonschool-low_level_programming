#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: Letter to check
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int result;
	int negative;

	result = n % 10;

	if (n >= 0)
	{
	_putchar(result + '0');
	return (result);
	}

	else
	{
		negative = result * -1;
		_putchar(negative + '0');
		return (negative);
	}
}
