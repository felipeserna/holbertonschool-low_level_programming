#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to the array, NULL if malloc fails
 * or if min is greater than max
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
