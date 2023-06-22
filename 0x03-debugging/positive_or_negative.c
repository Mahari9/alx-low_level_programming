#include "main.h"

/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

	return(0);
}
