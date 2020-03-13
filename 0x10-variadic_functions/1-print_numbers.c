#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	unsigned int printer;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printer = va_arg(valist, unsigned int);
		printf("%d", printer);

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}

	va_end(valist);
	printf("\n");
}
