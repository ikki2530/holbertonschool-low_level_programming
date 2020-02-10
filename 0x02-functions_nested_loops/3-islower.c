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

/**
 * main - Prints 10 times the alphabet
 *
 * Return: return 0
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
