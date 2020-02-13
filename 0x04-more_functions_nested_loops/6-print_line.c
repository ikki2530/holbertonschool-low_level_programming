#include "holberton.h"
/**
 * print_line - prints the last digit of n
 *
 * @n: number of lines to print
 * Return: return las digit of n
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
