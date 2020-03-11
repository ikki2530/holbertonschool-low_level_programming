#include <stdlib.h>
/**
 * array_iterator - function to execute
 * @array: array to be executed
 * @size: size of elements of the array
 * @action: function to be called
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
