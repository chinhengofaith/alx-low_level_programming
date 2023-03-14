#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a newly created 2D array
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to the grid
 */

int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(width * sizeof(int));
		if (arr[a] == NULL)
		{
			for (d = 0; d < a; d++)
				free(arr[d]);
			free(arr);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
			arr[b][c] = 0;
	}
	return (arr);
}
