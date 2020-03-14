#include <stdarg.h>
#include <stdio.h>

/**
 * prints - prints the content of the parameters
 * @i: iterator
 * @n: number of elements
 * @band: band to alert when separator is null
 * @p: value to print
 * @s: separator
 */
void prints(unsigned int i, const unsigned int n, int band, char *p,
const char *s)
{
	if (i < (n - 1) && band == 1)
		printf("%s", p);
	if (i < (n - 1) && band == 0)
		printf("%s%s", p, s);
	if (i == (n - 1) && (band == 1 || band == 0))
		printf("%s\n", p);
}
/**
 * print_strings - prints each string split by a separator
 *@separator: separator to split strings
 * @n: number of parameters
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int band = 0;
	va_list lista;
	const char *s;
	char *p;

	s = separator;
	if (separator == NULL)
		band = 1;

	va_start(lista, n);
	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(lista, char *);
		if (p == NULL)
		{
			p = "(nil)";
			prints(i, n, band, p, s);
		}
		else
		{
			prints(i, n, band, p, s);
		}
	}
	va_end(lista);
}
