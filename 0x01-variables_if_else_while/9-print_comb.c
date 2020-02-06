#include <stdio.h>
/**
 * main - Prints numbers 0-9 separated by ,
 *
 * Return: return 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);

		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
