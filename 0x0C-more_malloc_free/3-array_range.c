#include "main.h"
/**
  *array_range - creates an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: pointer to newly created array.
  *NULL if malloc fails.
  *NULL if min > max.
  */
int *array_range(int min, int max)
{
	int *ptr;
	int range, i;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		ptr[i] = min++;

	return (ptr);
}
