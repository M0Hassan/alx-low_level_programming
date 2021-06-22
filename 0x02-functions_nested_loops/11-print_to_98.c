#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - print numbers from n to 98
 *@n: - the number from where we start counting to 98
 *
 *Return: 0
 */

void print_to_98(int n)
{
while (n < 98)
{
printf("%d", n);
n++;
}
while (n > 98)
{
printf("%d", n);
n--;
}
if (n == 0)
{
printf("%d", n);
}
printf("\n");
}
