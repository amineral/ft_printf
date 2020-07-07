#include "printf.h"

void check_flag(char flag, va_list ap)
{
    if (flag == 's')
        case_s(ap);
    else if (flag == 'd')
        case_d(ap);
    else if (flag == '%')
        ft_putchar('%');
    else if (flag == 'c')
        case_c(ap);
    else if (flag == 'o')
        case_o(ap);
    else if (flag == 'u')
        case_u(ap);
}