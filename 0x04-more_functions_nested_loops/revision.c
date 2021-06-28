#include <stdio.h>

void print_square(int n)
{
  int i;
  int space;

  for (i = 0; i < n; i++)
    {
      for (space = 0; space < n; space++)
	{
	  putchar('#');
	}
      putchar('\n');
    }
  putchar('\n');
}

int main(void)
{
  print_square(7);
 
  return (0);
}
