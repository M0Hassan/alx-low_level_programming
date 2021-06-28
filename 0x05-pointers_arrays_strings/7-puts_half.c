#include "holberton.h"

/**
 *_strlen - gets the length of a string
 *@str: - the string
 *Return: 0
 */

int _strlen(char *str)
{
int len = 0;
while (*str != '\0')
{
len++;
str++;
}
return (len);
}



/**
 *puts_half - prints half of the string followed by a line
 *@str: - the string
 *Return: 0
 */

void puts_half(char *str)
{
int idx;
int len = (_strlen(str));
if (len % 2 != 0)
{
idx = (len / 2) + 1;
}
else
{
idx = (len / 2);
}
while (idx < len)
{
_putchar(*(str + idx));
idx++;
}
_putchar('\n');
}
