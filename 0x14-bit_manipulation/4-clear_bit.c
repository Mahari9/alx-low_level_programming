#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: pointer to decimal number to change
 * @index: index is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;
	unsigned int num;

	if (index > 64)
		return (-1);
	num = index;
	for (k = 1; num > 0; k *= 2, num--)
		;

	if ((*n >> index) & 1)
		*n -= k;

	return (1);
}
