#include "holberton.h"

/**
 *more_numbers - print 0-14 ten times
 *Return: 0
 */

void more_numbers(void)
{
int i;
int j;
i = 0;
while (i < 10)
{
j = 0;
while (j < 15)
{
if (j >= 10)
{
_putchar('0' + j / 10);
}
_putchar('0' + j % 10);
j++;
}
_putchar('\n');
i++;
}
}
