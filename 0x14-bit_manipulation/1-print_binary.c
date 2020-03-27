#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int res;

	if (n == 0)
	{
		_putchar('0');
	}
	for (i = 63; i >= 0; i--)
	{
		res = n >> i;
		if (res & 1)
			_putchar('1');
		else if (res | 0)
			_putchar('0');
	}
}
