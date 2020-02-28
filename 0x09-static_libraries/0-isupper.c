#include "holberton.h"
/**
 * _isupper - Checks if a char is lowercase
 * @c: Letter to evaluted
 * Return: 1 if the char is uppercase. 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
