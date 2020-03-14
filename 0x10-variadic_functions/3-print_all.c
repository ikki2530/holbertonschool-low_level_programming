#include <stdarg.h>
#include <stdio.h>
/**
 *separator - prints comma separator
 *@j: iterator
 *@lg: lenth of format
 *Return: Nothing
 */

void separator(int j, int lg)
{
	if (j == (lg - 1))
	{
		printf("\n");
		return;
	}
		printf(", ");
}
/**
 * print_all - prints split by a separator
 *@format: separator to split the numbers
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int j, lg;
	char * s;
	va_list lt;

	lg = 0;
	while (format[lg])
	{
		lg++;
	}
	va_start(lt, format);
	j = 0;
	while (format[j] != '\0')
	{
		switch (format[j])
		{
		case 'c':
			printf("%c", va_arg(lt, int));
			separator(j, lg);
			break;
		case 'i':
			printf("%i", va_arg(lt, int));
			separator(j, lg);
			break;
		case 'f':
			printf("%f", va_arg(lt, double));
			separator(j, lg);
			break;
		case 's':
			s = va_arg(lt, char *);
			if (s == NULL)
			{
				printf("nil");
				separator(j, lg);
				break;
			}
			printf("%s",s);
			separator(j, lg);
			break;
		}
		j++;
	}

	va_end(lt);
}
