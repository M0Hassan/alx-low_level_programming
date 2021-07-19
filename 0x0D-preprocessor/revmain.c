#include<stdio.h>
#include "revision.h"

int main(void)
{
  int a;
  int b;
  int c;

  a = 15;
  b = 14;
  c = ADD(a, b);

  printf("The total value is %d\n", c);
  
  return (0);
}
