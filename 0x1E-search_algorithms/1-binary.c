#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located. If value is not present in array
 * or if array is NULL, your function must return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int middle;
	int i;

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		middle = (left + right) / 2;

		if (array[middle] < value)
			left = middle + 1;

		else if (array[middle] > value)
			right = middle - 1;

		else
			return (middle);
	}
return (-1);
}
