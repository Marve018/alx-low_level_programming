#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *@s: string
 *@c: character
 *Return: s or NULL or 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
		return (s);
	return (NULL);

}
