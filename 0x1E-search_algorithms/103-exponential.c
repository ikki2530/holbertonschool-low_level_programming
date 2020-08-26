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
 * binarySearch - searches for a value in a sorted array of integers
 * @arr: array
 * @l: left index
 * @r: right index
 * @x: is the value to search for
 * Return: If value is not present in array or if array is NULL, return -1
 */
int binarySearch(int *arr, int l, int r, int x)
{
	int i = 0, mid;

	if (r >= l)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			if (i == r - 1)
				printf("%d\n", arr[i]);
			else
				printf("%d, ", arr[i]);
		}

		mid = l + ((r - l) / 2);
		/*If the element is present at the middle itself*/
		if (arr[mid] == x)
			return (mid);

		if (arr[mid] > x)
			return (binarySearch(arr, l, mid - 1, x));

		/*Else the element can only be present in right subarray*/
		return (binarySearch(arr, mid + 1, r, x));
	}

	/* We reach here when element is not present in array*/
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 * Return: If value is not present in array or if array is NULL, return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int n = (int)size, i = 0, idx;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	printf("value %d, n %d\n", value, n);
	while (i < n && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	printf("Value found between indexes [%d] and [%d]\n", i / 2, i - 1);

	idx = binarySearch(array, i / 2, min(i + 1, n), value);
	return (idx);
}
