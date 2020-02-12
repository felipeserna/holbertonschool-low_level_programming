#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: Letter to check
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		do {
			if (n != 98)
			printf("%d, ", n);
			else
			printf("%d\n", n);
			n++;
		} while (n <= 98);
		printf("\n");
	}
	else if (n > 98)
	{
		do {
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n--;
		} while (n >= 98);
		printf("\n");
	}
	else
		printf("%d\n", n);
}
