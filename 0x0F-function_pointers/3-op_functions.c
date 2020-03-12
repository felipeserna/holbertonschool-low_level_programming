#include "3-calc.h"
/**
 * op_add - sums two integers
 * @a: integer value
 * @b: integer value
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two integers
 * @a: integer value
 * @b: integer value
 * Return: subtraction of a minus b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: integer value
 * @b: integer value
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: integer value
 * @b: integer value
 * Return: a divided by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulus
 * @a: integer value
 * @b: integer value
 * Return: modulus of a divided by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
