#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: pointer to a 2 dimensional array of integers
 * @height: act as rows
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
		else
			break;
	}
	free(grid);
}

