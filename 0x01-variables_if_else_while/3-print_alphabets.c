#include <stdio.h>

/*main - Entry point
 *Return: Always 0 (success)
 */

int main(void)
{
char U_alpha = 'A';
char L_alpha = 'a';

while (L_alpha <= 'z')
{
putchar(L_alpha);
L_alpha++;

}
while (U_alpha <= 'Z')
{
putchar(U_alpha);
U_alpha++;

}
putchar('\n');
return (0);
}
