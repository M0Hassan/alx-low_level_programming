#include "holberton.h"

/**
 *_islower - checks whether a char is of lowercase
 *@c: - the character to check
 * 
 *Return: 1 if lowercase or 0 if otherwise
 */

int _islower(char c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
