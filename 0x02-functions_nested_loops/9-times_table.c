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
	int prod2;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			prod2 = i * (j + 1);
			if (prod < 10)
			{
				ch = prod + '0';
				_putchar(ch);

				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					if (prod2 < 10)
						_putchar(' ');
				}
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');

				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
