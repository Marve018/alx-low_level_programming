#include "main.h"

/**
 *print_number - function that prints an integer.
 *
 *@n: parameter to be checked
 *
 *Return: always 0
 */
void print_number(int n)
{

	if (n % 2 == 0)
	{
		n++;
		_putchar(n + '0');
	}
}
