#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * op_add - calculates the sum of two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two number
 * @a: first int
 * @b: second int
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two int
 * @a: first int
 * @b: second int
 *
 * Return: product of two int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two int
 * @a: first int
 * @b: second int 
 *
 * Return: division of two int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the reminder of the division
 * @a: first int
 * @b: second int
 *
 * Return: reminder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
