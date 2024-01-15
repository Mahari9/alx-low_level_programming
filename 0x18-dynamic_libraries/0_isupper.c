#include "main.h"
#include <stdio.h>
/**
 * _isupper - Check if character c represents an uppercase letter.
 * @c: integer value to be checked
 *
 * Return: 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
