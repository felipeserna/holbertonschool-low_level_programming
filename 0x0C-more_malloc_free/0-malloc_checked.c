#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer
 * @c: pointer
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(sizeof(int) * b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
