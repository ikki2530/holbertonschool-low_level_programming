#include <stdio.h>
/**
 * main - Prints hello world
 *
 * Return: return 0
 */
int main(void)
{
char sizeChar;
int sizeInt;
long int sizeLongInt;
long long int sizeLongLongInt;
float sizeFloat;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(sizeChar));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(sizeInt));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(sizeLongInt));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(sizeLongLongInt));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(sizeFloat));
return (0);
}
