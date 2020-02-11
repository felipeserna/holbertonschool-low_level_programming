#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char p[10] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};
	int c;

	for (c = 0; c < 10; c++)
		_putchar(p[c]);
	return (0);
}
