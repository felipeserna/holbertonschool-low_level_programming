#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * c: Letter to check
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char b;
	char c;

	for (b = 0 ; b < 10 ; b++)
	{
	for (c = 'a' ; c <= 'z' ; c++)
	_putchar(c);
	_putchar('\n');
	}
}
