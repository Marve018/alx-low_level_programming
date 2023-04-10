#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 *
 * @n: an integer
 * @index: given index
 *
 * Return: the value at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	check = 1;
	check <<= index;

	if ((n & check) == check)
		return (1);
	return (0);
}
