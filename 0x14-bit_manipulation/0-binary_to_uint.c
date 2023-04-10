#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int(dec).
 *
 * @b: pointer to a string containing a binary number
 *
 * Return: converted decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	/* declare variables */
	int i;
	unsigned int digit, num = 0;

	/* check if string is empty */
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			digit = 0;

		else if (b[i] == '1')
			digit = 1;

		else
			return (0);

		num = (num << 1) + digit;
	}

	return (num);
}
