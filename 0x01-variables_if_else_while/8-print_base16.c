#include <stdio.h>

/**
 *main - print all numbers of base16 in lowercase
 *Return: Always 0 (success)
 */

int main(void)
{
int num = '0';
int letters = 'a';
while (num <= '9')
{
putchar(num);
num++;
}
while (letters <= 'f')
{
putchar(letters);
letters++;
}
putchar('\n');
return (0);
}
