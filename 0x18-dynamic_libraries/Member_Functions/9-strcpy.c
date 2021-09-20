#include "main.h"


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
