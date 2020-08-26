#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 * Return: If value is not present in array or if array is NULL, return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (int)size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low]) && (
		value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (
			value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);

	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
