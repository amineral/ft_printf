#include "printf.h"

int ft_numlen(int number, int base)
{
    int len;

    len = 0;
    number < 0 ? len++ : len;
    while (number / base != 0)
    {
        number = number / base;
        len++;
    }
    len++;
    return (len);
}

void ft_itoa(int number, int base)
{
    int     len;
    char    *str_num;

    len = ft_numlen(number, base);
    str_num = malloc(sizeof(char) * len + 1);
    str_num[len] = '\0';
    if (number < 0)
    {
        str_num[0] = '-';
        number = number * -1;
    }
    if (number == 0)
        str_num[len - 1] = '0';
    while (number != 0)
    {
        str_num[len-- - 1] = (number % base) + 48;
        number = number / base;
    }
    ft_putstr(str_num);
}
