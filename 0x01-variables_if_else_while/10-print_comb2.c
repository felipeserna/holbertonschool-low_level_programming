#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c;
int d;
for (c = 48 ; c <= 57; c++)
{
	for (d = 48; d <= 57; d++)
	{
	putchar(c);
	putchar(d);
	if (c != 57 || d != 57)
	putchar(44);
	putchar(32);
}
}
putchar('\n');
return (0);
}
