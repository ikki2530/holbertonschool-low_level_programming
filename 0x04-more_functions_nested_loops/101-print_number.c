#include "holberton.h"
/**
 * print_number - prints numbers 0 - 14 ten times
 * @n: Value to print
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int v = n;

	if (n < 0)
	{
		_putchar('-');
		v = v * (-1);
	}

	if (v / 10)
	{
		print_number(v / 10);
	}
	_putchar((v % 10) + 48);
}
