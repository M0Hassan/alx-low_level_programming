#include <stdio.h>
#include <time.h>

/*
 *main - Entry point
 *Return: Always 0 (success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %i is %i", n, (n % 10));

if ((n % 10) == 0)
{
printf(" and is zero\n");
}
else if ((n % 10) > 5)
{
printf(" and is greater than 5\n");
}
else if ((n % 10) < 6)
{
printf(" and is less than 6 and not zero\n");
}
return (0);
}
