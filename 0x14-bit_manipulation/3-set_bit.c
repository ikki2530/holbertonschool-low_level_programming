#include "holberton.h"
/**
 * set_bit - set a valu to 1
 * @n: number
 * @index: position where will set the number
 * Return: 1 if it worked, -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	*n = (1 << index) | (*n);
	return (*n);
}
