#include "holberton.h"

/**
 *_strcat - concatenates two strings together
 *@dest: the first string
 *@src: the second string
 *Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while(dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i+j] = src[j];
j++;
}
dest[i+j] = '\0';
return (dest);
}
