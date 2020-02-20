#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reverse an array
 * @a: array to reverse
 * @n: number of elements
 * Return: dest string
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int iter;

	if (n % 2 == 0)
	{
		iter = n / 2;
	}
	else
	{
		iter = (n / 2) + 1;
	}

	for (i = 0; i < iter; i++)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}

}
