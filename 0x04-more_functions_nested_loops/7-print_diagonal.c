#include "holberton.h"

/**
 *print_diagonal - print '\' n times
 *@n: - the number of times to print
 *Return: 0
 */

void print_diagonal(int n)
{
int draw;
int space;
if (n > 0)
{
for (draw = 0; draw < n; draw++)
{
for (space = 0; space < draw; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else if (n <= 0)
{
_putchar('\n');
}
}
