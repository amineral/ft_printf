#ifndef PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

# define TYPES "dscou%"

void	ft_putstr(char const *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int     valid_type(char type);
void	ft_putnbr_unsigned(int n);
void    case_s(va_list ap); //string
void    case_d(va_list ap); //int
void    case_c(va_list ap); //char
void    case_o(va_list ap); //int in base 8
void    case_u(va_list ap); //unsigned int
void    check_flag(char flag, va_list ap);
int     ft_base_to_base(int number, int base_to);
int     reverse_number(int number);


#endif