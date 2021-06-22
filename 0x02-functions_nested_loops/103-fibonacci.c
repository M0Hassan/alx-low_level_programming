#include<stdio.h>

/**
 *main - print the total of all fibonacci numbers below 4,000,000
 *Return: - 0
 */

int main(void)
{
long int a, b, total, tmp;
a = 1;
b = 2;
total = b;
while (b < 4000000)
{
tmp = a + b;
a = b;
b = tmp;
total += (b % 2 == 0) ? b : 0;
}
printf("%li\n", total);
return (0);
}
