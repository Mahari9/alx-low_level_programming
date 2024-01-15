#include <stdio.h>
/**
 * add - add 2 integers
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtraction func
 * @a: first int
 * @b: second int
 *
 * Return: difference of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies 2 integers
 * @a: first int
 * @b: second int
 *
 * Return: product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - division function
 * @a: first int
 * @b: second int
 *
 * Return: quotient of a and b
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - finds remainder
 * @a: first int
 * @b: second int
 *
 * Return: remainder from division
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
