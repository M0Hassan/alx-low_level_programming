#include "holberton.h"

/**
 *string_toupper - changes all lowercase letters to uppercase
 *@s: the string
 *Return: an uppercase string
 */

char *string_toupper(char *s)
{
int i = 0;
int j;
while (s[i] != '0')
{
i++;
}
for (j = 0; j < i; j++)
{
if (s[j] >= 97 && s[j] <= 122)
{
s[j] = s[j] - 32;
}
}
return (s);
}
