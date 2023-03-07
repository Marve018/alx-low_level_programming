#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring
 *@s: string
 *@accept: input string
 *Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				length += 1;
				i++;
			}
			if (accept[j] == '\0')
				break;
		}
	}
	return (length);
}
