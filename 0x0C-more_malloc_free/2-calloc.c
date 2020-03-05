#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_zero - initialize the array to zero
 * @p: pointer to set zeros
 * @size: bytes to set to zero
 * Return: nothing
 */
void init_zero(char *p, int size)
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		p[i] = '\0';
	}
}
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements of the array
 * @size: bytes of each element of the array
 * Return: A void pointer to the allocated memory, NULL if fails
 * or if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;

	if (nmemb == 0)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	init_zero(p, size);

	return (p);
}
