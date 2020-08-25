#include "search_algos.h"

/**
 * print_array - prints the array from l to r(included)
 * @array: array to be printed
 * @l: left index
 * @r: right index
 * Return: Nothing
 */
void print_array(int *array, int l, int r)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i == r)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}


/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 * Return: If value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (int)size - 1, m = 0;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] > value)
			r = m - 1;
		else
			l = m + 1;
	}

	return (-1);
}
