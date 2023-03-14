#include "main.h"

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
	char *ct;
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	ct = malloc((len1 * sizeof(char)) + (len2 * sizeof(char)) + 1);
	if (ct == 0)
		return (NULL);

	for (i = 0, j = 0; i < (len1 + len2 + 1); i++)
	{
		if (i < len1)
			ct[i] = s1[i];
		else
			ct[i] = s2[j++];
	}

	return (ct);
}
