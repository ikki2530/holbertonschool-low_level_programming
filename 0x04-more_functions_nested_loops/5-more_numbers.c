#include "holberton.h"
/**
 * more_numbers - prints numbers 0 - 14 ten times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int j;
	int i;
	int dc;
	int fn;
	int ln;

	for (j = 0; j <= 9; j++)
	{

		for (i = 0; i <= 14; i++)
		{
			ln = i % 10;
			fn = i / 10;
			dc = i;

			if (i > 9)
			{
				dc = fn;
			}

			_putchar(dc + '0');

			if (i > 9)
			{
				_putchar(ln + '0');
			}
		}
		_putchar('\n');
	}
}
