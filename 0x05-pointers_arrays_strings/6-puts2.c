#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to print
 * Return: Nothing
 */
void puts2(char *str)
{
	int x;
	int y = 0;

	for (x = 0; str[x] != '\0'; x++)
	{

	}

	x--;
	while (y <= x)
	{
		_putchar(str[y]);
		y = y + 2;
	}
	_putchar('\n');
}
