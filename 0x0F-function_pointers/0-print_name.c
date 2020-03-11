#include "function_pointers.h"
#include <stdio.h>
void f(char *name)
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
		_putchar(name[i]);
}
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
