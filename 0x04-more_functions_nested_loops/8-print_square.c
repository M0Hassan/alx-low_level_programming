#include "holberton.h"

/**
 *print_square - print a square u8sing #
 *@size: - size of the square
 *Return: 0
 */

void print_square(int size)
{
int row, column;
if (size > 0)
{
for (row = 1; row <= size; size++)
{
for (column = 1; column <= size; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
