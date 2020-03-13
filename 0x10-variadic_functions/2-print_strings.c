#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *printer;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printer = va_arg(valist, char *);

		if (printer == NULL)
			printf("(nil)");

		printf("%s", printer);

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}

	va_end(valist);
	printf("\n");
}
