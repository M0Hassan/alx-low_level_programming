#include<stdio.h>

/**
 *main - generates random passwords for 101-crackme
 *Rerurn: 0
 */

int main(void)
{
int total;
char c;
srand(time(NULL));
while(total <= 2645)
{
c = rand() % 128;
total += c;
putchar(c);
}
putchar(2772 - total);
return (0);
}
