#include "libftprintf.h"

int ft_printop(char o, va_list vargs)
{
    int len;

    len = 0;
    if (o == 's')
        len = ft_putstr(va_arg(vargs, char*));
    else if (o == 'c')
        len =ft_putchar(va_arg(vargs, int));
    else if (o == 'p')
        len = 0;
    else if (o == 'd')
        len = ft_itoa(va_arg(vargs,int));
    else if (o == 'i')
        len = ft_itoa(va_arg(vargs,int));
    else if (o == 'u')
        len = ft_itoa(va_arg(vargs,unsigned int));
    else if (o == 'x')
        len = ft_itoa_hex(va_arg(vargs,unsigned int),o);
    else if (o == 'X')
        len = ft_itoa_hex(va_arg(vargs,unsigned int),o);
    else if (o == '%')
        len = ft_putchar('%');
    return (len);
}
