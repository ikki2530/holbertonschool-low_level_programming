#include "holberton.h"
/**
 * _islower - Checks if a char is lowercase
 * @c: Letter to evaluted
 * Return: 1 if the char is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
