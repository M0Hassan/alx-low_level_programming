#include <stdio.h>

/**
 *main - prints the fibonacci of the first 50 numbers
 *Return: 0
 */

int main(void)
{
int i, n;
long a, b, next;
a = 1;
b = 2;
n = 50;
for (i = 0; i <= n; i++)
{
if (i == 49)
{
printf("%lu", a);
}
else
{
printf("%lu, ", a);
next = a+ b;
a = b;
b = next;
}
}
printf("\n");
return (0);
}
