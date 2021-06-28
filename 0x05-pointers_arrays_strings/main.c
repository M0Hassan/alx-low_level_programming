#include<stdio.h>
#include "holberton.h"

int main(void)
{
  int n;

  n = 405;

  reset_to_98(&n);

  printf("The value of n is now: %d\n", n);

  return (0);
}
