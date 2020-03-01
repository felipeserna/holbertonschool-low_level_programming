#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - prints the name of program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
