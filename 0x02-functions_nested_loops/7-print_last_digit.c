#include "holberton.h"

/**
 *print_last_digit - print the last digit of a number
 *@n: - the number
 *
 *Return: the last digit
 */

int print_last_digit(int n)
{
if (n < 0)
{
n *= -1;
}
_putchar('0' + (n % 10));
return (n % 10);
}
