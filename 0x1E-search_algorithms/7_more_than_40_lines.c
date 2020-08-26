#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located. If value is not present
 * in array or if array is NULL, return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int jump_size = sqrt((int)size);
	int left = 0, right = 0;
	int i;

	if (!array)
		return (-1);

	while (left < (int)size && array[left] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);

		if (((int)size - 1) <= (left + jump_size))
			right = (int)size - 1;

		else
			right = left + jump_size;

		if (array[left] <= value && array[right] >= value)
			break;

		left = left + jump_size;
	}

	if (left >= (int)size || array[left] > value)
		return (-1);

	if (((int)size - 1) <= right)
		right = (int)size - 1;

	else
		right = right;

	/* start linear search */
	i = left;

	printf("Value found between indexes [%d] and [%d]\n", i, right);

	while (i <= right && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		i = i + 1;
	}

	printf("Value found between indexes [%d] and [%d]\n", i, left);

	printf("Value checked array[%d] = [%d]\n", i, array[i]);

	return (-1);
}
