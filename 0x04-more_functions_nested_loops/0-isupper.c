#include "holberton.h"

/**
 *_isupper - check for uppercase letters
 *@c: - the character to check
 *Return: 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
