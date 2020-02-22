#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - prints times table until 0 - 15
 * @n: times table val
 * Return: Nothing
 */
void print_times_table(int n)
{
	if (n >= 0 || n <= 15)
	{
		int i, j, val, val2;
		char ch;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				val = i * j;
				val2 = i * (j + 1);
				if (val < 10)
				{
					ch = val + '0';
					_putchar(ch);
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
						
						if (val2 < 10)
							_putchar(' ');
					}
				}
				else
				{
					_putchar((val / 10) + '0');
					_putchar((val % 10) + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
