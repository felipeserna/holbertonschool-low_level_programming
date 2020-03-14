#include "variadic_functions.h"
/**
 * print_all - prints all, followed by a new line
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int a = 0, b = 1;
	char *c;

	while (format)
	{
		va_start(ap, format);
		while (*(format + a))
		{
			b = 1;
			switch (*(format + a))
			{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				c = va_arg(ap, char *);
				if (c == NULL)
					c = "(nil)";
				printf("%s", c);
				break;
			default:
				b = 0;
				break;
			}
			if (*(format + a + 1) && b)
				printf(", ");
			a++;
		}
		va_end(ap);
		break;
	}
	printf("\n");
}
