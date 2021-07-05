#include "holberton.h"
#include<stdio.h>

char *_strcat(char *dest, char *src)
{
  int i = 0;
  int j = 0;

  while (*(dest + i) != '\0')
    {
      i++;
    }

  while (*(src + j) != '\0')
    {
      *(dest + i) = *(src + j);
      i++;
      j++;
    }
  *(dest + i) = '\0';
  return (dest);
}
char *_strncat(char *dest, char *src, int n)
{
  int i = 0;
  int j = 0;
  while (*(dest + i) != '\0')
    {
      i++;
    }
  while (*(src + j) != '\0' && j < n)
    {
      *(dest + i) = *(src + j);
      i++;
      j++;
    }
  *(dest + i) = '\0';
  return (dest);
}

char *_strncpy(char *dest, char *src, int n)
{
  int i;

  for (i = 0; (i < n && src[i] != '\0'); i++)
    {
      *(dest + i) = *(src + i);
    }
  for (; i < n; i++)
    {
      *(dest + i) = '\0';
    }
  return (dest);
}

int _strcmp(char *s1, char *s2)
{
  int digit = 0;

  while (*s1)
    {
      if (s1 != s2)
	{
	  digit = ((int)*s1 -48) - ((int)*s2 - 48);
	  break;
	
	}
      s1++;
      s2++;
    }
  return (digit);
}

void reverse_array(int *a, int n)
{
  int tmp;
  int first = 0;
  int last = n - 1;
  while (first < last)
    {
      tmp = *(a + first);
      *(a + first) = *(a + last);
      *(a + last) = tmp;
      first++;
      last--;
    }
}


int main(void)
{
  char dest[6] = "Hello";
  char src[6] = "world\n";

  /* char *ptr;
     ptr = _strncpy(dest, src, 3);*/

  /** 
  printf("%d\n", _strcmp(dest, src));
  printf("%d\n", _strcmp(src, dest));
  printf("%d\n", _strcmp(dest, dest));
  */
  int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i = 0;
  /* while(i < (sizeof(a) / sizeof(int)))
    {
      printf("%d", a[i]);
      i++;
    }
    printf("\n");*/
  reverse_array(a, sizeof(a) / sizeof(int));
  while (i < (sizeof(a) / sizeof(int)))
    {
      printf("%d", a[i]);
      i++;
    }
  printf("\n");
  
  return (0);
}
          
