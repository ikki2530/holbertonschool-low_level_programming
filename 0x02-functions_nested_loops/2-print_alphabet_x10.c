#include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}

/**
 * main - Prints 10 times the alphabet
 *
 * Return: return 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
