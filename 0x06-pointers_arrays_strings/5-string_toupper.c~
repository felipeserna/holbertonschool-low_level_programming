#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
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
