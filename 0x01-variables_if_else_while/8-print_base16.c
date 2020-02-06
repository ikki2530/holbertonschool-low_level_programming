#include <stdio.h>
/**
 * main - Prints numbers 0-9
 *
 * Return: return 0
 */
int main(void)
{
	int i = 48;

	while (i < 103)
	{
		if (i < 58)
			putchar(i);
		else if (i > 96)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
