#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: base
 * @y: power
 * Return: result of x^y
 */
int _pow_recursion(int x, int y)
{
	int f;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	f = x * _pow_recursion(x, y - 1);

	return (f);
}
