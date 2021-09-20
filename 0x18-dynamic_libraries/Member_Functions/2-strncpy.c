#include "main.h"

/**
*_strncpy - copy a string into another string
*@dest: - first string
*@src: - the other string
*@n: the integer
*Return: the copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; (i < n && src[i] != 0); i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
