#include<stdio.h>

int main(void)
{
  char s[6] = "hello";

  char *f;

  f = &s[3];

  printf("%s\n", f);

  return (0);
}