#include "holberton.h"

/**
 *_strlen - gets the length of a string
 *@str: - the string
 *Return: the length
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
 **_strcpy - copies a string to another
 *@dest: copy src to this buffer
 *@src: what is being copies
 *Return: copy src
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; i <= _strlen(src); i++)
{
dest[i] = src[i];
}
return (dest);
}
