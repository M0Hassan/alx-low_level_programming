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
 *idx_num_starts - the uindex where a number is first fond in a string
 *@s: the string to check
 *Return: the index of the digit
 */

int idx_num_starts(char *s)
{
int i;
for (i = 0; i < _strlen(s); i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
return (i);
}
}
return (-1);
}

/**
 *find_sign - get the sign of the number
 *@s: - integer
 *Return: 1 if positive or -1 otherwise
 */

int find_sign(char *s)
{
int negatives = 0, i = 0, sign = 1;
while (i < (idx_num_starts(s)))
{
if (s[i++] == '-')
{
negatives++;
}
}
if (negatives % 2 != 0)
{
sign = -1;
}
return (sign);
}

/**
 *_atoi - converts a string to an integer
 *@s: - the string
 *Return: integer
 */

int _atoi(char *s)
{
int idx_digit_starts = (idx_num_starts(s));
int digits_to_print = 0;
int sign;
int t = 1, i;
unsigned int num = 0;
int digit = (idx_num_starts(s));
if (idx_digit_starts < 0)
{
return (0);
}
sign = find_sign(s);
while ((s[idx_digit_starts] >= '0' && s[idx_digit_starts] <= '9')
&& (idx_digit_starts <= _strlen(s)))
{
digits_to_print += 1;
idx_digit_starts++;
}
i = 1;
while (i < digits_to_print)
{
t *= 10;
i++;
}
for (i = digit; i < (digit + digits_to_print); i++)
{
num += (s[i] - '0') * t;
t /= 10;
}
return (num *sign);
}
