#include "holberton.h"
/**
 * get_bit - get the value of a bit at a given index
 * @n: number
 * @index: index of the binary number to return
 * Return: bit at the position index given
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int r;

	if (n == 0 && index > 0)
		return (-1);
	for (i = 0; n >> i != 0; i++)
	{
	}
	if (index > (i - 1))
		return (-1);

	r = (n >> index) & 1;
	return (r);
}
