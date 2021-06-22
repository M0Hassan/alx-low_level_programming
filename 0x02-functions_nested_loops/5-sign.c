#include "holberton.h"

/**
 *sign.c - print the sign of a number
 *@n - the number to check
 *
 *Return: 0
 */

int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if ( c == 0)
{
_putchar('0');
return (0);
}
else if (c < 0)
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
