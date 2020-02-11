#include "holberton.h"
/**
 * print_last_digit - prints the last digit of n
 * @n: Number to evaluate
 * Return: return last digit of n
 */
int print_last_digit(int n)
{

	if (n < 0)
		n = -n;

	n = n % 10;

	_putchar('0' + n);
	return (n);
}
