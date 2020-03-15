#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * prt_s - prints strings
 * @list: parameter list
 * Return: nothing
 */
void prt_s(va_list list)
{
	char *stg;

	stg = va_arg(list, char *);
	if (stg == NULL)
	{
		printf("(nail)");
		return;
	}

	printf("%s", stg);
}
/**
 * prt_f - prints floats
 * @list: parameter list
 * Return: nothing
 */
void prt_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * prt_i - prints ints
 * @list: parameter list
 * Return: nothing
 */
void prt_i(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * prt_c - prints chars
 * @list: lista de parámetros
 * Return: nothing
 */
void prt_c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_all - prints split by a separator
 * @format: separator to split the numbers
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *s;
	unsigned int x, y;
	va_list lista;
	cmp dataT[] = {
		{"c", prt_c},
		{"i", prt_i},
		{"f", prt_f},
		{"s", prt_s}
	};

	va_start(lista, format);
	s = "";
	x = 0;
	while (format != '\0' && format[x] != '\0')
	{
		y = 0;
		while (y < 4)
		{
			if (dataT[y].str[0] == format[x])
			{
				printf("%s", s);
				dataT[y].prt(lista);
				s = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(lista);
}
