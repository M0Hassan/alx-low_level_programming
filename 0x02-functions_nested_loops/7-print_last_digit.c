#include "holberton.h"

/**
 *_abs - prints the absolute value of intger n
 *@n: - the integer
 *
 *Return: 0
 */

int _abs(int n)
{
if (n < 0)
{
return (-n);
}
else
{
return (n);
}
}

/**
 *print_last_digit - outputs the last digit of a number
 *@n: - the number
 *
 *Return: the last digit
 */

int print_last_digit(int n)
{
int last_n;
last_n = _abs((n % 10));
_putchar('0' + last_n);
return (last_n);
}
