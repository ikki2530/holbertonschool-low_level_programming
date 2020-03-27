#include "holberton.h"
/**
 * flip_bits - number of bits you would need to flip to get another num
 * @n: number 1
 * @m: number 2
 * Return: Number of bits you would flip to get m number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = 0, i = 0;

	r = n ^ m;
	for (i = 0; i < 63; i++)
	{
		r = r >> i;
		if (r & 1)
			r++;
	}
	return (r);
}
