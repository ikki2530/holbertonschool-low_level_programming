#include "holberton.h"
/**
 * times_table - prints the last digit of n
 *
 * Return: return las digit of n
 */
void times_table(void)
{
	int i;
	int j;
	int prod;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			ch = prod + '0';
			_putchar(ch);

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
/**
 * main - Checks the print_last_digit function
 *
 * Return: return 0
 */
int main(void)
{
	times_table();
	return (0);
}
