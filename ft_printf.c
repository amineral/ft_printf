#include "printf.h"

void start_print(va_list ap, char type)
{
  if (type == 's')
    case_s(ap);
  else if (type == 'd')
    case_d(ap);
}

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

void ft_printf(char *apFormat, ...)
{
  va_list ap;
  char    *p;
  
  p = apFormat;
  va_start(ap, apFormat);
  while (*p)
  {
    if (*p == '%')
    {
      p++;
      if (*p == '%')
        ft_putchar('%');
      else if (valid_type(*p))
        start_print(ap, *p);
    }
    else
      ft_putchar(*p);
    p++;
  }
  va_end(ap);
}

int main()
{
  char *a = "Sasha";
  int b = 25;
  ft_printf("Hello, my name in %s.\nI'm %d, years old.\nThis is 100%% info", a, b);
  return (0);
}


