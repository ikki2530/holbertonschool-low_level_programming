#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number elements to print
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{

		printf("%i", a[x]);

		if (x != (n - 1))
			printf(", ");
	}
	printf("\n");
}
