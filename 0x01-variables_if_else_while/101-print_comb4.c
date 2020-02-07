#include <stdio.h>
/**
 * main - Prints numbers 0-9 separated by ,
 *
 * Return: return 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 8; x++)
	{
		y = x + 1;
		for (; y <= 9; y++)
		{
			z = y + 1;
			for (; z <= 9; z++)
			{

				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (!(x == 7 && y == 8 && z == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
