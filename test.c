#include "printf.h"

void exponent(double number)
{
    int exp;
    double n;

    exp = 0;
    n = number;
    while ((n / 10) > 1)
    {
        exp++;
        n = n / 10;
    }
    ft_putnbr(n);
    ft_putstr("e+\0");
    ft_putnbr(exp);
}

void put_after_point(double n)
{
    int i;
    double m;

    m = n;
    i = 0;
    while (i < 5)
    {
        m = m * 10;
        ft_putnbr((int)m % 10);
        i++;
    }
    printf("\n%f\n", m - (int)m);
    if ((m - (int)m) != 0)
    {
        if (((int)m % 10) >= ((m - (int)m) * 10))
            ft_putnbr(((int)m % 10) + 1);
        else
            ft_putnbr(((int)m % 10));
        
    }
}

void ft_putdouble(double n)
{
    int m;
    int i;
    double f;

    i = 0;
    f = n;

    if (f < 0)
    {
        write(1, "-", 1);
        f = f * -1;
    }
    m = (int)f;
    f = f - (double)m;
    put_after_point(f);
}
int main()
{
    double a;

    a = 1.1234564;
    ft_putdouble(a);
    //printf("\n%f", a);

    return (0);
}
