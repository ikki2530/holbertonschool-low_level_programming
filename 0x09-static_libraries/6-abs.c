#include "holberton.h"
#include <stdio.h>
/**
 * _abs - prints the absolute value of a number
 * @n: Number to evaluate
 * Return: 1 if n is greater than 0, 0 if n is equal to 0, -1 in other cases
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
