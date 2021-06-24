#include "holberton.h"

/**
*print_numbers - prints 0-9
*Return: 0
*/

void print_numbers(void)
{
int i = '0';
while (i <= '9')
{
_putchar(i);
i++;
}
_putchar('\n');
}
