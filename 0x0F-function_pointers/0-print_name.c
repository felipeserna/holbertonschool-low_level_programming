#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function pointer of type char as argument
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
