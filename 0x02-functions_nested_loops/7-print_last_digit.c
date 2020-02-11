#include "holberton.h"
/**
 * print_last_digit - prints the last digit of n
 * @n: Number to evaluate
 * Return: return last digit of n
 */
int print_last_digit(int n)
{
	int c;

	if (n < 0)
		n = -n;

	c = n % 10;

	_putchar('0' + c);
	return (c);
}
