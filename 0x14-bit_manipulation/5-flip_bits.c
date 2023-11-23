
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first input number
 * @m: second input number to be converted
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	int count;

	xor = n ^ m;
	count = 0;

	while (xor)
	{
		count++;
		xor &= (xor - 1);
	}

	return (count);
}
