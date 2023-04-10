#include "main.h"

/**
 *set_bit - function that sets the value of a bit to 1 at a given index.
 *
 *@n: an integer
 * @index: index
 *
 * Return: int 1 for success, -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	check = 1 << index;
	*n = (*n | check);

	return (1);
}
