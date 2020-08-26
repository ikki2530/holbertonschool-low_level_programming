#include "search_algos.h"
/**
 * min - function to find the min value between num1 and num2
 * @v: number 1
 * @n: number 2
 * Return: min value
 */
int min(int v, int n)
{
	if (v > n)
		return (n);
	else
		return (v);
}

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 * Return: If value is not present in array or if array is NULL, return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int n = (int)size;
	int step = 0, prev = 0;

	if (array == NULL)
		return (-1);
	while (array[min(step, n)] < value && step < n)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(n);
		if (prev >= n)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	while (array[prev] < value && step <= n)
	{
		if (array[n - 1] < value)
		{
			prev = n - 1;
			break;
		}

		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == n)
			return (-1);
	}

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
	{
		return (prev);
	}
	return (-1);
}
