#include "main.h"

/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: an integer to be evaluated
 * @index: the index starting from 0, of the bit we want to get
 * Return: the Value of bit at index, or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);

	num = n >> index;

	return (num & 1);
}
