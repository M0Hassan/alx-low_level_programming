#include "holberton.h"

/**
 *reverse_array - reverses the contents of an array
 *@a: the array
 *@n: the integer limit
 *Return: 0
 */
void reverse_array(int *a, int n)
{
int i;
int j = 0;
int buffer[500];
for (i = n - 1; 1 >= 0; i--)
{
buffer[j] = a[i];
j++;
}
for (i = 0; i < n; i++)
{
a[i] = buffer[i];
}
}
