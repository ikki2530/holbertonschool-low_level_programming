#include "holberton.h"
/**
 * _puts - Prints a string
 * @str: string to print
 * Return: Nothing
 */
void _puts(char *str)
{
	int m = 0;

	for (m = 0; str[m] != '\0'; ++m)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
