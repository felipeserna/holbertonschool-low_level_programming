#include "search_algos.h"
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
	int i = 0;
	int step = sqrt((int)size);

	if (!array)
		return (-1);

	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (step >= (int)size || array[step] >= value)
			break;

		i = step;
		step += sqrt((int)size);

	}

	printf("Value found between indexes [%d] and [%d]\n", i, step);

	for (; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
