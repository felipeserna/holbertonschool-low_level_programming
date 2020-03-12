#include "3-calc.h"
/**
 * get_op_func - selects the function to perform
 * the operation asked by the user
 * @s: operator passed as argument to the program
 * Return: pointer to the function that corresponds to the operator
 * given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	(void) s;

	return (0);
}
