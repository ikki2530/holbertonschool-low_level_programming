#include "holberton.h"
/**
 * print_numbers - Prints numbers 0 - 9
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int m = 0;

	for (m = 0; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
