#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 *putchar- prints a character to stdout
 *@c- the character to print
 *
 *Return: on success 1
 *else -1 is returned if an error occurs
 */

int _putchar(char c);

/**
 *print_alphabet - print lowercase alphabets
 */

void print_alphabet(void);

/**
 *print_alphabet_x10 - print lowercase alphabets 10 times
 */

void print_alphabet_x10(void);

/**
 *_islower - checks whether a character is lowercase
 *@c - the character to check
 *
 *Return: int
 */

int _islower(char c);

/**
 *_isalpha - checks for an alphabet
 *@c - the character to check
 *
 *Return: 1 if lowercase or uppercase character or 0 if not
 */

int _isalpha(char c);

/**
 *print_sign - print sign of a number
 *@n - number to check
 *
 *Return: 1 if n is 0 or greater than 0, 0 if 0, -1 if less than 0
 */

int print_sign(int n);

/**
 *_abs - compute absolute value of integer
 *@n - the integer to be computed
 *
 *Return: int
 */

int _abs(int n);

/**
 *print_last_digit - print the last digit of a number
 *@int - the number
 *
 *Return: the last digit
 */

int print_last_digit(int);

/**
 *jack_bauer - print every minute of a day
 *Return: 0
 */

void jack_bauer(void);

/**
 *times_table - print the multiplication table
 *Return: 0
 */

void times_table(void);

/**
 *add - adds two numbers
 *@a - first number
 *@b - second number
 *
 *Return: the total
 */

int add(int a, int b);

/**
 *print_to_98 - print the numbers from n to 98
 *@n - the number where printing begins
 *
 *Return: 0
 */

void print_to_98(int n);

/**
 *print_times_table - prints times table up to n
 *@n - where the times table ends
 *
 *Return: 0
 */

void print_times_table(int n);

#endif
