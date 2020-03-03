#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - copy
 * @width: width of matrix
 * @height: matrix height
 * Return: a pointer char
 */
int **alloc_grid(int width, int height)
{
	int i, j, x;
	int **p;

	if (width <= 0 || height <= 0)
		return ('\0');

	p = malloc(width * sizeof(int *));
	for (x = 0; x < width; x++)
	{
		p[x] = malloc(height * sizeof(int));
	}

	if (p == '\0')
		return ('\0');
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
