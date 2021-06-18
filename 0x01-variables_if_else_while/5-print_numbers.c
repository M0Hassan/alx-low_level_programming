#include <stdio.h>

/**
 *main - print all numbers from 0 to 9
 *Return: Always 0 (success)
 */

int main(void)
{
int num = 0;
while (num < 10)
{
printf("%i", num);
num++;
}
putchar('\n');
return (0);
}
