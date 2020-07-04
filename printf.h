#ifndef PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

# define TYPES "ds"

void	ft_putstr(char const *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int     valid_type(char type);
void    case_s(va_list ap);
void    case_d(va_list ap);


#endif