#include <stdlib.h>
#include <stdio.h>
/**
 * f - function that prints a name
 * @name: name passed
 * Return: nothing
 */
void f(char *name)
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
		printf("%c", name[i]);
}

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
