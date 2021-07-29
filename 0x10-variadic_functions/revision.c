#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...)
{
  unsigned int i;
  va_list varg;
  char *s;

  if (n > 0)
    {
      va_start(varg, n);
      for (i = 1; i <= n; i++)
	{
	  s = va_arg(varg, char *);
	  if (s == NULL)
	    {
	      printf("(nil)");
	    }
	  else
	    {
	      printf("%s", s);
	    }
	  if (i != n && separator != NULL)
	    {
	      printf("%s", separator);
	    }
	}
      va_end(varg);
    }
  printf("\n");
}

int main(void)
{
  print_strings(", ", 5, "java", "django", 7, "javascript");
  return(0);
}

   
