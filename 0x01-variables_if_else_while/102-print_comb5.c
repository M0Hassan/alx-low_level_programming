#include <stdio.h>

/**
 *main - print all combinations of two digits
 *Return: Always 0 (success)
 */

int main(void)
{
int digit1;
int digit2;
int pair1;
int pair2;

for (digit1 = '0'; digit1 <= '9'; digit1++)
{
for (digit2 = '0'; digit2 <= '9'; digit2++)
{
for (pair1 = digit1; pair1 <= '9'; pair1++)
{
for (pair2 = digit2; pair2 <= '9'; pair2++)
{
putchar(digit1);
putchar(digit2);
putchar(' ');
putchar(pair1);
putchar(pair2);
if (!((digit1 == '0' && digit2 == '0') && (pair1 == '0' && pair2 == '0')))
{
if (!((digit1 == '9' && digit2 == '8') && (pair1 == '9' && pair2 == '9')))
{
putchar(',');
putchar(' ');
}
}
}
pair2 = '0';
}
}
}
putchar('\n');
return (0);
}
