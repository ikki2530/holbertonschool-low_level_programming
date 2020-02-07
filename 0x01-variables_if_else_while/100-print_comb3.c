#include <stdio.h>
/**
 * main - Prints numbers 0-9 separated by ,
 *
 * Return: return 0
 */
int main(void)
{
	int x = 48;
	int y = 48;
	int i = 0;

	while (x < 58)
	{
		if (x != y)
		{
			putchar(x);
			putchar(y);
		}
		if (i < 8 && x != y)
		{
			putchar(',');
			putchar(' ');
		}
		y++;

		if (y > 57)
		{
			i++;
			y = 48 + i;
			x++;
		}
	}
	putchar('\n');
	return (0);
}
