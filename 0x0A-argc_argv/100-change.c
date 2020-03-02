#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - minimal number of coins for change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc < 0)
	{
		printf("%d\n", 0);
	}
	else if (argc == 2)
	{
		printf("%d\n", 1);
	}
	return (0);
}
