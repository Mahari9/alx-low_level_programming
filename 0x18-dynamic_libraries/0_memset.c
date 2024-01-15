#include "main.h"

/**
 * _memset - fills block of memmory with constant byte
 * @s: pointer to chararcter
 * @b: source data to be changed
 * @n: index tracking position
 *
 * Return: pointer to the character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
