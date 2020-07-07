#include "printf.h"

void case_c(va_list ap)
{
  char   ival;

  ival = va_arg(ap, int);
  ft_putchar(ival);  
}