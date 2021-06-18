#include <stdio.h>

/**
 *main - print the alphabets in lowercase and in reverse
 *Return: Always 0 (success)
 */

int main(void)
{
char alpha = 'z';
while (alpha >= 'a')
{
putchar(alpha);
alpha--;
}
putchar('\n');
return (0);
}
