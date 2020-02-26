#include "holberton.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number
 * Return: the factorial of the number
 */
int factorial(int n)
{
	int f = 0;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	f = n * factorial(n - 1);

	return f;
}
