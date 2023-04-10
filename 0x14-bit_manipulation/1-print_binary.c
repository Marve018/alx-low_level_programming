#include "main.h"

/**
 * print_binary - prints a number in binary notation
 *
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/* declare variables */
	unsigned long int num, value;
	int i;
	int j = 0;

	num = sizeof(unsigned long int) * 8;

	for (i = num - 1; i >= 0; i--)
	{
		/* calculate the value of current bit */
		value = (n >> i) & 1;

		if (value == 1)
			j = 1;

		if (j == 1)
			_putchar(value + '0');
	}
	if (j == 0)
		_putchar('0');
}
