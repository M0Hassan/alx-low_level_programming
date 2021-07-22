#include<stdio.h>

/**
 *create an array of function pointers and use them
 *as an if statement or switch statement.
 */

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int add (int x, int y)
{
  return (x + y);
}

int subtract(int x, int y)
{
  return (x - y);
}

int multiply(int x, int y)
{
  return (x * y);
}

int divide(int x, int y)
{
  return (x / y);
}

int main(void)
{
  int x, y, choice, result;

  int (*operator[4])(int x, int y);

  operator[0] = add;
  operator[1] = subtract;
  operator[2] = multiply;
  operator[3] = divide;

  printf("Enter two numbers X and Y");

  scanf("%d", &x);
  scanf("%d", &y);

  printf("Enter 0 to add, 1 to subtract, 2 to multiply, 3 to divide");

  scanf("%d", &choice);

  result = operator[choice](x, y);

  printf("The result of the operation is %d\n", result);

  return (0);
}
