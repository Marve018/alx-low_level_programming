#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 *		 to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count;

	/*Perform XOR operation to find the bits*/
	xor = n ^ m;
	count = 0;
	while (xor > 0)
	{
		if (xor & 1)
			count++;
		xor >>= 1;
	}
	return (count);
}
