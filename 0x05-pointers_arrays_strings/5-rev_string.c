#include "holberton.h"

/**
 *_strlen - returns the length of a string
 *@s: - the string
 *Return: lenght of string
 */

int _strlen(char *s)
{
int len;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
 *rev_string - reverses a string
 *@s: - the string to reverse
 *Return: 0
 */

void rev_string(char *s)
{
int i = 0;
int j = (_strlen(s) - 1);
char tmp;
while (i < j)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
i++, j--;
}
}
