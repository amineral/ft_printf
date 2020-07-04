#include "printf.h"

void case_d(va_list ap)
{
  int   ival;

  ival = va_arg(ap, int);
  ft_putnbr(ival);  
}