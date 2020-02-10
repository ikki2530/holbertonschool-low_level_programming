#include "holberton.h"
/**
 * print_alphabet - prints alphabet, in lowercase
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
/**
 * main - Prints the alphabet, in lowercase
 *
 * Return: returns 0
 *
 */

int main(void)
{
	print_alphabet();
	return (0);
}
