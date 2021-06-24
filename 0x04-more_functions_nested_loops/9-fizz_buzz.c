#include <stdio.h>

/**
 *main - prints 1 to 100
 *for multiples of 3 print fizz
 *for multiples of 5 print Buzz
 *for multiples of both 3 and 5 print FizzBuzz
 *Return: 0
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 5 == 0 && i % 3 == 0)
{
printf("%s", "FizzBuzz");
}
else if (i % 3 == 0)
{
printf("%s", "Fizz");
}
else if (i % 5 == 0)
{
printf("%s", "Buzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
