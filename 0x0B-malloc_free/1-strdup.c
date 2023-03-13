#include "main.h"

/**
 *_strdup - function that returns a pointer to a
 *newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str: string to duplicate
 * Return: Pointer to a the new duped string
 */
char *_strdup(char *str)
{
	char *ptrS;
	int strLen, i;

	if (str == NULL)
		return (NULL);
	for (strLen = 0; str[strLen] != '\0'; strLen += 1)

	ptrS = malloc((strLen + 1) * sizeof(char));

	if (ptrS == 0)
		return (NULL);

	for (i = 0; i < strLen; i++)
	{
		ptrS[i] = str[i];
	}

	return (ptrS);
}
