#include "holberton.h"
/**
 * val - returns the square root  of a number
 * @v: val to proof
 * @num: number to find square root
 * Return: the square root, or -1 if doesnt have a square root
 */
int val(int v, int num)
{
	int res;

	if (v * v == num)
		return (v);

	if (v * v > num)
		return (-1);

	if (v * v < num)
		v = v + 1;

	res = val(v, num);
	return (res);
}
/**
 * _sqrt_recursion - returns the square root  of a number
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int v = 0;

	return (val(v, n));
}
