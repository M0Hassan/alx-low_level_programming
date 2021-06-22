#include "holberton.h"

/**
*_isalpha - checker for an alphabet
*@c - the character to check
*
*Return: 1 if character is an alphabet and 0 otherwise
*/

int _isalpha(char c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
