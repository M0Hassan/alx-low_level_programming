#include <unistd.h>

/**
 *_putchar - prints char to stdout
 *@c - the char to be printed
 *
 *Return: 1 on success
 *on error, return -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
