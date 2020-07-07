#include "printf.h"

void case_u(va_list ap)
{
    int   ival;

    ival = va_arg(ap, unsigned int);
    ft_putnbr_unsigned(ival);
}