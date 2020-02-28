#include "holberton.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: integer value
 * @n: integer value
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int j;
	int temp;

	for (j = 0; j < n; j++, n--)
	{
		temp = a[j];
		a[j] = a[n - 1];
		a[n - 1] = temp;
	}
}
