#include "holberton.h"

/**
 *_strlen - gets the lenght of a string
 *@str: - the string
 *Return: the lenght
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
 *puts2 - prints every second character of a string followed by a a line
 *@str: - the string
 *Return: 0
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
