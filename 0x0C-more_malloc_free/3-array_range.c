#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - nums form min(included) to max(included)
 * @min: max value
 * @max: min value
 * Return: - int pointer
 */
int *array_range(int min, int max)
{
	int lg, i, *p, x;

	if (min > max)
		return (NULL);

	lg = max - min;
	x = min;
	p = malloc(sizeof(int) * (lg + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= lg; i++)
	{
		p[i] = x;
		x++;
	}
	return (p);

}
