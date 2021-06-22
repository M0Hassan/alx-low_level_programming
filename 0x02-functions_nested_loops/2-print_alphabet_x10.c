#include "holberton.h"

/**
 *print_alphabet_x10 - prints lowercase alphabets 10 times
 *Return: 0
 */

int main(void)
{
char alpha;
int i;
for (i = 0; i < 10; i++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
return (0);
}

