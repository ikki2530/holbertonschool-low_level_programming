/**
 * int_index - function to search an integer
 * @array: array to be executed
 * @size: size of elements of the array
 * @cmp: function to compare the integer of the array
 * Return: index if find the number, - 1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != '\0' && cmp != '\0')
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
