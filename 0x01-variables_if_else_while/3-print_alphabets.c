#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char C;
	char c;

	for (C = 'a' ; C <= 'z' ; C++)
		putchar(C);
	for (c = 'A' ; c <= 'Z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
