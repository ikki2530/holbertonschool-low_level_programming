#include <stdio.h>
/**
 * main - Prints alphabet except q, e
 *
 * Return: return 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
