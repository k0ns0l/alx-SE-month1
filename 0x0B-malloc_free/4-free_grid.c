#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D array
 * @grid: the address of the two dimensional grid
 * @height: width of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for ( ; i < height; i++)
		free(grid[i]);

	free(grid);
}
