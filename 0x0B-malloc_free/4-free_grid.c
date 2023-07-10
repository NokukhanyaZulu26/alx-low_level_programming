#include "main.h"
#include<stdlib.h>

/**
 * free_grid - Entry point
 * @grid: memories
 * @height: dimention of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	for (; x < height; x++)
		free(grid[x]);
	free(grid);
}
