#include "holberton.h"

/**
 *more_numbers - print 0-14 ten times
 *Return: 0
 */

void more_numbers(void)
{
int i;
char j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
if (i / 10 > 0)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
