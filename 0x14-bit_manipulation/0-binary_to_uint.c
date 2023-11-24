#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 and b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, square;
	int x;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}

	for (square = 1, total = 0, x--; x >= 0; x--, square *= 2)
	{
		if (b[x] == '1')
			total += square;
	}

	return (total);
}
