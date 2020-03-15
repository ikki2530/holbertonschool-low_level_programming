#ifndef _HOLBERTON_
#define _HOLBERTON_

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct compare
{
	char *str;
	void (*prt)();
} cmp;

#endif
