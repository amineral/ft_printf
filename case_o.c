#include "printf.h"

void case_o(va_list ap)
{
    int ival;

    ival = va_arg(ap, int);
    ival = ft_base_to_base(ival, 8);
    ft_putnbr(ival);
}