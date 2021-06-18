#include <stdio.h>

/**
 *main - print all combinations of two digits
 *Return: Always 0 (success)
 */

int main(void)
{
int digit1;
int digit2;
for (digit1 = 0; digit1 <= 99; digit1++)
{
for (digit2 = 0; digit2 <= 99; digit2++)
{
if (digit1 < digit2)
{
if (digit1 >= 0 && digit2 > 1)
{
putchar(',');
putchar(' ');
}
putchar((digit1 / 10) + 0x30);
putchar((digit1 % 10) + 0x30);
putchar(' ');
putchar((digit2 / 10) + 0x30);
putchar((digit2 % 10) + 0x30);
}
}
}
putchar('\n');
return (0);
}
