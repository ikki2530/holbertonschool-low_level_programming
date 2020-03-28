#include "holberton.h"
/**
 * flip_bits - checks the number of bits to flip to become a number in another
 * @n: number 1
 * @m: number 2
 * Return: Number of bits you would flip to get m number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = 0, i = 0, res = 0;

	n ^= m;
	for (i = 0; i < 63; i++)
	{
		res = n >> i;
		if (res & 1)
			r++;
	}
	return (r);
}
