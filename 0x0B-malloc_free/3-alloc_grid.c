#include "main.h"

/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */
int **alloc_grid(int width, int height)
{
	int **ag;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	ag = malloc(height * sizeof(*ag));
	if (ag == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ag[i] = malloc(width * sizeof(**ag));
		if (ag[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ag[i]);
			free(ag);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ag[i][j] = 0;
	}
	return (ag);
}
