#include<stdio.h>

/**
 *main - print the total of all numbers that are multiples of 3 and 5
 *Return: - 0
 */

int main(void)
{
int n;
int total;
total = 0;
for (n = 0; n < 1024; n++)
{
if ((n % 3 == 0) && (n % 5 == 0))
{
total = total + n;
}
}
printf("%d\n", total);
return (0);
}
