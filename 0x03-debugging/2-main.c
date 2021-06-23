#include "holberton.h"

#include<stdio.h>

int main(void)
{
  int a, b, c;
  int largest;
  a = 1;
  b = 5;
  c = 10;

  largest = largest_number(a, b, c);

  printf("%d is the largest", largest);

  return (0);
}
