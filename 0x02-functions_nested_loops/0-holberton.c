#include "holberton.h"
/**
 * main - Prints Holberton
 *
 * Return: returns 0
 *
 */
int main(void)
{
	int i = 0;
	char st[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	while (i < 9)
	{
		_putchar(st[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
