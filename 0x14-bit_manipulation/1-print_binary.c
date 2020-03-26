#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: base
 * @y: power
 * Return: result of x^y
 */
unsigned long int _pow_recursion(unsigned long int x, unsigned long int y)
{
	unsigned int f;

	if (y == 0)
		return (1);
	f = x * _pow_recursion(x, y - 1);
	return (f);
}
/**
 * pos1 - return the pos of 1
 * @n: num to check
 * Return: position of 1
 */
unsigned long int pos1(unsigned long int n)
{
	unsigned long int val = 0, exp2 = 0;

	while (val < n)
	{
		val = _pow_recursion(2, exp2);
		exp2++;
	}
	if (val != n)
		exp2 -= 2;
	if (val == n)
		exp2--;
	return (exp2);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int exp = 0, p = 0, lg = 0, dif = 0, cur = 0, prev = 0;
	unsigned long int i = 0;
	int band = 0, cont = 0;

	if (n == 0)
		_putchar('0');
	while (n != 0)
	{
		exp = pos1(n);
		if (band == 0)
		{
			lg = exp + 1;
			cur = lg;
			prev = lg;
			cont = lg + 1;
		}
		band++;
		cur = exp + 1;
		dif =  prev - cur;
		if (dif > 1)
		{
			for (i = 0; i < (dif - 1); i++)
				_putchar('0');
			cont -= i;
		}
		_putchar('1');
		cont--;
		p = _pow_recursion(2, exp);
		n = n - p;
		if (n == 0 && cont > 1)
		{
			cont = cont;
			for (; cont > 1; cont--)
			{
				_putchar('0');
			}
		}
		prev = cur;
	}
}
