#include "holberton.h"

/**
 *_putchar - prints a character to the stdout
 *@c: - the character to print
 *Return: 1 on success -1 on error 
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}
