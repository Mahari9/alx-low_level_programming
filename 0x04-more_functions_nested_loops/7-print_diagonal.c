#include "main.h"

/**
  * print_diagonal - Draws a diagonal lines according parameter
  * @c: The number of times to print diagonal lines
  *
  * Return: empty
  */
void print_diagonal(int c)
{
	int x, y;

	if (c <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < c; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
