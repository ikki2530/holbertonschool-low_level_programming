#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - prints last half of string
 * @str: string to print
 * Return: Nothing
 */
void puts_half(char *str)
{
	int x;
	int y;

	for (x = 1; str[x] != '\0'; x++)
	{

	}
	printf("%i\n", x);

	if (x % 2 == 0)
	{
		y = (x / 2);
		for (; y < x; y++)
			_putchar(str[y]);
	}
	else
	{
		y = (x + 1) / 2;
		for (; y < x; y++)
			_putchar(str[y]);
	}

	_putchar('\n');
}
