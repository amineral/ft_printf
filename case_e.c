#include "printf.h"

void case_e(va_list ap)
{
  double ival = 25;

  ival = va_arg(ap, double);
  printf("%e", ival);
}