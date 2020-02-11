#include "holberton.h"
/**
 * jack_bauer -time of a day
 *
 * Return: return las digit of n
 */
void jack_bauer(void)
{
	int w;
	int x;
	int y;
	int z;

	for (w = '0'; w <= '2'; w++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y < '6'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if (w < '2')
					{
						_putchar(w);
						_putchar(x);
						_putchar(':');
						_putchar(y);
						_putchar(z);
						_putchar('\n');
					}
					else if (x < '4')
					{
						_putchar(w);
						_putchar(x);
						_putchar(':');
						_putchar(y);
						_putchar(z);
						_putchar('\n');
					}
				}
			}
		}
	}
}
