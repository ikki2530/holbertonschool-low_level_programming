#include <stdlib.h>
#include <stdio.h>

/**
 *print_name -  functions that call the f function
 *@name: name to pass to f function
 *@f: function to callback
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
