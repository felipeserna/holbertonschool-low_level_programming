#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: Letter to check
 * @b: Letter to check
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
