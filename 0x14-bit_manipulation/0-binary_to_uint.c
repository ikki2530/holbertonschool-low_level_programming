#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: base
 * @y: power
 * Return: result of x^y
 */
unsigned int _pow_recursion(unsigned int x, unsigned int y)
{
	unsigned int f;

	if (y == 0)
		return (1);
	f = x * _pow_recursion(x, y - 1);
	return (f);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1
 * Return: the convert number, or 0 if: b is NULL, b not contains only 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int lg = 0, i, sum = 0, exp = 0;

	if (b == NULL)
		return (0);
	for (lg = 0; b[lg] != '\0'; lg++)
	{
		if (b[lg] != '0' && b[lg] != '1')
			return (0);
	}
	exp = lg - 1;
	for (i = 0; i < lg; i++)
	{
		if (b[i] == '1')
			sum += _pow_recursion(2, exp);
		exp--;
	}
	return (sum);
}
