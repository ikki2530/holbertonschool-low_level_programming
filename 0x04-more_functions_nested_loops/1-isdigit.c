#include "holberton.h"
/**
 * _isdigit - Checks if a value is a digit
 * @c: var to evaluate
 * Return: 1 if the value is a digit. 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
