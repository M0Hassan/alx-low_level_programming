#include<stdio.h>


int func(int arg)
{
  if (arg > 0)
    {
      printf("Testing the function pointer");
    }
  else
    {
      printf("Testing from less than 0");
    }
}

int main(void)
{
  int (*funcptr)(int arg);

  funcptr = func;
  funcptr(5);

  return (0);
}
  
