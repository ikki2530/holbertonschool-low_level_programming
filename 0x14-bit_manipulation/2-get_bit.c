#include "holberton.h"
/**
 * get_bit - get the value of a bit at a given index
 * @n: number
 * @index: index of the binary number to return
 * Return: bit at the position index given
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int r;

	if (index > (sizeof(n) * 8) - 1)
		return (-1);
	r = (n >> index) & 1;
	return (r);
}
