#ifndef _HOLBERTON_
#define _HOLBERTON_

/**
 *_putchar - puts character to standard output
 *@c: - the character to output
 *Return: 0
 */

int _putchar(char c);

/**
 *_isupper - checks whether a character is uppercase
 *@c - the character to check
 *Return: 1 if true 0 otherwise
 */

int _isupper(int c);

/**
 *_isdigit - checks for a digit
 *@c: - digit to be checked
 *Return: 1 if tru 0 otherwise
 */

int _isdigit(int c);

/**
 *mul - multplies two numbers
 *@a: - first number
 *@b: = second number
 *Return: product of a and b
 */

int mul(int a, int b);

/**
 *print_numbers - print numbers
 *Return: 0
 */

void print_numbers(void);

/**
 *print_most_numbers - print 0 - 9 skip 2 and 4
 *Return: - 0
 */

void print_most_numbers(void);

/**
 *more_numbers - print 0-14 ten times
 *Return: 0
 */

void more_numbers(void);

/**
 *print_line - print the character "_" n times to draw a line
 *@n: - number of character to draw
 *Return: 0
 */

void print_line(int n);

/**
 *print_diagonal - print the character '/' n times
 *@n: - number of times to draw the character
 *Return: 0
 */

void print_diagonal(int n);

/**
 *print_square - print a square of a given size
 *@size: - the given size
 *Return: 0
 */

void print_square(int size);

/**
 *print_triangle - draw a tringle with #'s of given size
 *@size: - size of the triangle to draw
 *Return: 0
 */

void print_triangle(int n);

/**
 *print_number - print_number without using long, array, pointer
 *@n: - the number to printed
 *Return: 0
 */

void print_number(int n);

#endif
