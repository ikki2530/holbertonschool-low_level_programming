# More functions, nested loops<br/>

## 0-isupper.c<br/>
function that checks for uppercase character.<br/>
- **Prototype:** int _isupper(int c);
- Returns 1 if c is uppercase
- Returns 0 otherwise

## 1-isdigit.c<br/>
function that checks for a digit (0 through 9).<br/>
- **Prototype:** int _isdigit(int c);
- Returns 1 if c is a digit
- Returns 0 otherwise

## 2-mul.c<br/>
function that multiplies two integers.<br/>
- **Prototype:** int mul(int a, int b);

## 3-print_numbers.c<br/>
function that prints the numbers, from 0 to 9.<br/>
- **Prototype:** void print_numbers(void);
- Using _putchar function

## 4-print_most_numbers.c<br/>
function that prints the numbers, from 0 to 9.<br/>
- **Prototype:** void print_most_numbers(void);
- Do not print 2 and 4
- Using _putchar function

## 5-more_numbers.c<br/>
function that prints 10 times the numbers, from 0 to 14.<br/>
- **Prototype:** void more_numbers(void);
- Using _putchar function

## 6-print_line.c<br/>
function that draws a straight line in the terminal.<br/>
- **Prototype:** void print_line(int n);
- Using _putchar function
- Where n is the number of times the character _ should be printed
- The line should end with a \n
- If n is 0 or less, the function should only print \n

## 7-print_diagonal.c<br/>
function that draws a diagonal line on the terminal.<br/>
- **Prototype:** void print_diagonal(int n);
- Using _putchar function
- Where n is the number of times the character \ should be printed
- The diagonal should end with a \n
- If n is 0 or less, the function should only print a \n

## 8-print_square.c<br/>
function that prints a square.<br/>
- **Prototype:** void print_square(int size);
- Using _putchar function
- Where size is the size of the square
- If size is 0 or less, the function should print only a new line
- Use the character # to print the square

## 9-fizz_buzz.c<br/>
program that prints the numbers from 1 to 100.
- For multiples of three print Fizz instead of the number
- for the multiples of five print Buzz
- For numbers which are multiples of both three and five print FizzBuzz
- Each number or word should be separated by a space
- Using standard library

## 10-print_triangle.c<br/>
function that prints a triangle.<br/>
- **Prototype:** void print_triangle(int size);
- Using _putchar function
- Where size is the size of the triangle
- If size is 0 or less, the function should print only a new line
- Use the character # to print the triangle

## 100-prime_factor.c<br/>
program that finds and prints the largest prime factor of the number
612852475143.<br/>
- Using standard library
- program will be compiled with this command:
gcc -Wall -pedantic -Werror -Wextra 100-prime_factor.c -o 100-prime_factor -lm

## 101-print_number.c
function that prints an integer.<br/>
- **Prototype:** void print_number(int n);
- Using _putchar function
- You are not allowed to use long
- You are not allowed to use arrays or pointers
- You are not allowed to hard-code special values