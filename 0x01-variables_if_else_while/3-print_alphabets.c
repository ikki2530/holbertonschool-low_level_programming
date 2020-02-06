#include <stdio.h>
/**
 * main - Prints alphabet
 *
 * Return: return 0
 */
int main(void)
{
	char ch;
	char chM;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (chM = 'A'; chM <= 'Z'; chM++)
		putchar(chM);
	putchar('\n');
}
