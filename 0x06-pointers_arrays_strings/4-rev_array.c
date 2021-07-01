#include "holberton.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
int tmp, begin = 0;
int end = n - 1; /* omit null terminator in length */
while (begin < end)
{
tmp = *(a + begin);
*(a + begin) = *(a + end);
*(a + end) = tmp;
begin++, end--;
}
}
