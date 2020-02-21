#include "holberton.h"
/**
 * print_number - prints an int number
 * @n: Value to print
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int v;

	if (n < 0)
	{
		_putchar('-');
		v = (-1) * n;
	}
	else
		v = n;

	if (v / 10)
	{
		print_number(v / 10);
	}
	_putchar('0' + v % 10);
}
