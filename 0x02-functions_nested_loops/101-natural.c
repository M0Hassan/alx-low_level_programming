#include<stdio.h>

/**
 *main - print the total of all numbers that are multiples of 3 and 5
 *Return: - 0
 */

int main(void)
{
int n;
int total;
n = 1;
total = 0;
while (n < 1024)
{
if ((n % 3 == 0) && (n % 5 == 0))
{
total = total + n;
}
n++;
}
printf("%d\n", total);
return (0);
}
