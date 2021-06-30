#include<stdio.h>



int _strlen(char *str)
{
  int len = 0;

  while (*str != '\0')
    {
      len++;

      str++;
    }
  return (len);
}


void print_half(char *str)
{
  int idx;

  int i = _strlen(str);

  if (i % 2 != 0)
    {
      idx = ((i - 1) / 2);
    }
  else
    {
      idx = i / 2;
    }

  while (idx < i)
    {
      putchar(str[idx]);
      idx++;
    }
  putchar('\n');
}

void rev_string(char *str)
{
  int i = 0;

  int j = (_strlen(str - 1));

  char tmp;

  while (i < j)
    {
      tmp = str[i];
      str[i] = str[j];
      str[j] = tmp;
      i++, j--;
    }
 
}

int main(void)
{


 char s[14] = "administration";

 printf("%s\n", s);
 
 /* rev_string(s);*/
 
 printf("%s\n", s);
  
  
 return (0);
}
