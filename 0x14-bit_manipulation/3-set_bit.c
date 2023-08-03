#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: the decimal number passed by pointer
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ptr;

	if (index > 64)
		return (-1);

	for (ptr = 1; index > 0; index--, ptr *= 2)
		;
	*n += ptr;

	return (1);
}
