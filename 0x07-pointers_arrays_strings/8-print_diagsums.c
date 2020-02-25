#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - searches a string for any of a set of bytes
 * @a: matrix
 * @size: matrix size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j = size + 1, x, y = size - 1, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += j)
	{
		sum1 += a[i];
	}

	for (x = y; x < size * size - 2; x += y)
	{
		sum2 += a[x];
		printf("a[x] %i en x = %i\n", a[x], x);
	}

	printf("%i, %i\n", sum1, sum2);
}
