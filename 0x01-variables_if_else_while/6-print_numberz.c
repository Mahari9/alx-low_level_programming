#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        by only using putchar and without variables of char.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}

