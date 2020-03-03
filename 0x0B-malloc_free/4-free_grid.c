#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: width of matrix
 * @height: matrix height
 * Return: a pointer char
 */
void free_grid(int **grid, int height)
{
	int i = 0;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}

	free(grid);

}
