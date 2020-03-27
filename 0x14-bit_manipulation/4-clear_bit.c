#include "holberton.h"
/**
 * clear_bit - clear a bit at a given position
 * @n: number
 * @index: index were the number will be set
 * Return: returns 1 if it is worked, -1 if and error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(*n) * 8) - 1))
		return (-1);
	*n = ~(1 << index) & (*n);
	printf("New n = %lu\n", *n);
	return (1);
}
