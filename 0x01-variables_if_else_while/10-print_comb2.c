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
	int cont = 0;

	while (x < 58)
	{
		putchar(x);
		putchar(y);

		if (cont < 99)
		{
			putchar(',');
			putchar(' ');
		}
		y++;
		cont++;

		if (y > 57)
		{
			y = 48;
			x++;
		}
	}
	putchar('\n');
	return (0);
}
