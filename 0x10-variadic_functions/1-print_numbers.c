#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints split by a separator
 *@separator: separator to split the numbers
 * @n: number of parameters
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;

	if (separator == NULL)
		separator = "";

	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
			printf("%d%s", va_arg(lista, int), separator);
		else
			printf("%d", va_arg(lista, int));
	}
	printf("\n");
	va_end(lista);
}
