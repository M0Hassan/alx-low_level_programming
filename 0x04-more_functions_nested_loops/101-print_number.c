#include "holberton.h"

/**
 *print_number - print an integer into the standard output
 *@n: - the integer to print
 *Return: 0
 */

void print_number(int n)
{
unsigned int a;
a = n;
if (n < 0)
{
_putchar(45);
a = -n;
}
if (a / 10)
{
print_number(a / 10);
}
_putchar((a % 10) + '0');
}
