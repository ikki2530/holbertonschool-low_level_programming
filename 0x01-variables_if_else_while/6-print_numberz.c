#include <stdio.h>
/**
 * main - Prints alphabet except q, e
 *
 * Return: return 0
 */
int main(void)
{
	int ch = 49;

	while (ch < 58)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
