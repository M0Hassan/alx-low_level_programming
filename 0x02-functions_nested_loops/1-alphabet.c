#include "holberton.h"

/**
 *print_alphabet - prints alphabet in lowercase
 *Return: 0
 */

int main(void)
{
char alpha;
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
return (0);
}
