#include "printf.h"

void case_s(va_list ap)
{
  char *ival;

  ival = va_arg(ap, char *);
  ft_putstr(ival);  
}
