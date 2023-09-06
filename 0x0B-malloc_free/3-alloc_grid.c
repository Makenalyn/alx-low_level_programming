#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a two dimension array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to the dimension of array
 */
int **alloc_grid(int width, int height)
{
	int i, j = 0;
	int **grid;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	grid = (int **) malloc(height * sizeof(int *));

	if (grid != NULL)
	{
		for (; i < height; i++)
		{
			grid[i] = (int *) malloc(width * sizeof(int));
			if (grid[i] != NULL)
			{
				for (j = 0; j < width; j++)
					grid[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(grid[i]);
					i--;
				}
				free(grid);

				return (NULL);
			}
		}
		return (grid);
	}
	else
	{
		return (NULL);
	}
}
