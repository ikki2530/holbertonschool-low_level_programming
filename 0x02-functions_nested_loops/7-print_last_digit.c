#include "holberton.h"
/**
 * print_last_digit - prints the last digit of n
 * @n: Number to evaluate
 * Return: return last digit of n
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -1 * n;

	_putchar(n + 48);
	return (n);
}
