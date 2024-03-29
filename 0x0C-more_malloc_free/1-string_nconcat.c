#include "main.h"
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sn;
	int num, len, i, j;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	len = _strlen(s1) + num + 1;

	sn = malloc(len * sizeof(*sn));
	if (sn == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		sn[i] = s1[i];
	for (j = 0; j < num; j++)
		sn[i + j] = s2[j];
	sn[i + j] = '\0';

	return (sn);
}

