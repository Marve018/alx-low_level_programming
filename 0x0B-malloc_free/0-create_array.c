#include "main.h"

/**
 **create_array - function that creates an array of chars,
 *and initializes it with a specific char.
 *@size: size of allocated memory
 *@c: character initialized
 *Return: NULL if size = 0, pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptArr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptArr = malloc(size * sizeof(char));
	if (ptArr == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptArr[i] = c;
	}
	ptArr[i] = '\0';
	return (ptArr);
}
