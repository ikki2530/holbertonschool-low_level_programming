#include "holberton.h"
/**
 * print_last_digit - prints the last digit of n
 * @n: Number to evaluate
 * Return: return las digit of n
 */
int print_last_digit(int n)
{
	int lt;
	char c;

	if ( n < 0)
		n = -1 * n;
	lt = n % 10;
	c = lt + '0';
	_putchar(c);
	return (lt);
}
/**
 * main - Checks the print_last_digit function
 *
 * Return: return 0
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
