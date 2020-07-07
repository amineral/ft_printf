#include "printf.h"

int valid_type(char type)
{
  char *p;

  p = TYPES;
  while (*p)
  {
    if (*p == type)
      return (1);
    p++;
  }
  return (0);
}

void start_print(va_list ap, char *p)
{
  while (*p)
  {
    if (*p == '%')
    {
      p++;
      if (valid_type(*p))
      {
        check_flag(*p, ap);
      }
      else
        write(1, "error", 6);
    }
    else
      ft_putchar(*p);
    p++;
  }
}

void ft_printf(char *apFormat, ...)
{
  va_list ap;
  char    *p;
  
  p = apFormat;
  va_start(ap, apFormat);
  start_print(ap, p);
  va_end(ap);
}

int main()
{
  char *a = "Sasha";
  int b = 25;
  int c = 10;
  ft_printf("Hello, my name in %s.\nI'm %d, years old.\nThis is 100%% info !!%u!!", a, b, c);
  return (0);
}


