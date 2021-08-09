#include<stdio.h>
#include"main.h"


unsigned int binary_to_uint(const char *b)
{
  int len = 0, pow = 1;
  unsigned int total = 0, error = 0;

  if (b == NULL)
    {
      return (error);
    }

  while (b[len] != '\0')
    {
      len++;
    }
  len = len - 1;

  while (len >= 0)
    {
      if ((b[len] != '0') && (b[len] != '1'))
	{
	  return (error);
	}

      if (b[len] == '1')
	{
	  total = total + pow;
	}
      pow = pow * 2;
      len--;
    }
  return (total);
}



void print_binary(unsigned long int n)
{
  unsigned long int n_copy = n, mask = 1;
  int len = 0;

  while (n_copy > 0)
    {
      len++;
      n_copy = n_copy >> 1;
    }

  len = len - 1;
  if (len > 0)
    {
      mask = mask << len;
    }

  while (mask > 0)
    {
      if (n & mask)
	{
	  _putchar('1');
	}
      else
	{
	  _putchar('0');
	}

      mask = mask >> 1;
    }
}
