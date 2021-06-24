#include "holberton.h"

/**
 *print_line - print a line using the "_"
 *@n: - the number of "_" to draw
 *Return: 0
 */

void print_line(int n)
{
int times;
for (times = n; times > 0; times--)
{
_putchar('_');
}
_putchar('\n');
}
