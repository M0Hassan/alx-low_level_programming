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
for (draw = 1; draw <= n; draw++)
{
for (space = 1; space <= draw; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
else
{
_putchar('\n');
}
}
