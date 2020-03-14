#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints each string split by a separator
 *@separator: separator to split strings
 * @n: number of parameters
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;
	char *p;

	if (separator != NULL)
	{
		va_start(lista, n);

		va_start(lista, n);
		for (i = 0; i < n; i++)
		{
			p = va_arg(lista, char *);
			if (p == NULL)
				printf("(nil)");
			else
			{
				if (i < (n - 1))
					printf("%s%s", p, separator);
				else
					printf("%s\n", p);
			}
		}
		va_end(lista);
	}
}
