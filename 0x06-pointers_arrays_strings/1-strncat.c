#include "holberton.h"

/**
 *_strncat - concatenate two strings
 *@dest: first string
 *@src: second string
 *@n: the integer
 *Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i + j] = src[j];
j++;		
}
dest[i + j] = '\0';
return (dest);
}
