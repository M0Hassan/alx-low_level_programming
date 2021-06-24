#include<stdio.h>

/**
 *main - print the largest prime factor of a number
 *Return: 0
 */

int main(void)
{
unsigned long num = 612852475143;
unsigned long divisor = 2;
while (divisor < num)
{
if (num % divisor == 0)
{
num /= divisor;
}
else
{
divisor++;
}
}
printf("%lu\n", num);
return (0);
}
