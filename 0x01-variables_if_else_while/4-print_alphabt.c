#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char C;

	for (C = 'a' ; C <= 'z' ; C++)
{
	if (C != 'q' && C != 'e')
{
	putchar(C);

}
}
putchar('\n');
return (0);
}
