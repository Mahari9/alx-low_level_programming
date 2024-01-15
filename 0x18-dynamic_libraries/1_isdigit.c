#include "main.h"
/**
 * _isdigit - Check if c is a digit 
 * @c: integer to be checked
 *
 * Return: 1 if digit or 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
