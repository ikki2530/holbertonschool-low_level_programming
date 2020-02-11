B#include "holberton.h"
/**
 * print_last_digit - prints the last digit of n
 * @n: Number to evaluate
 * Return: return last digit of n
 */
int print_last_digit(int n)
{
	int lt;
	char c;

	if (n < 0)
		n = -1 * n;

	lt = n % 10;
	c = lt + '0';

	_putchar(c);
	return (lt);
}
