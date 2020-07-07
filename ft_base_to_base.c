#include "printf.h"

int reverse_number(int number)
{
    int n;
    int m;

    m = 0;
    n = 0;
    while (number != 0)
    {
        m = number % 10;
        number = number / 10;
        n = (n * 10) + m;
    }
    return (n);
}

int ft_base_to_base(int number, int base_to)
{
    int n;
    int m;

    m = 0;
    n = 0;
    while (number != 0)
    {
        m = number % base_to;
        number = number / base_to;
        n = (n * 10) + m;
    }
    n = reverse_number(n);
    return (n);
}
