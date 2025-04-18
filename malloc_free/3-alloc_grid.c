#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2-dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2-dimensional array of integers, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
				free(grid);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		grid[i][j] = 0;
	}
	return (grid);
}
