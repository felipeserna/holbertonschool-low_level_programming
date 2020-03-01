#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("%d\n", 0);
	}
	return (0);
}
