#include "libftprintf.h" 

int ft_putnb(int nb , int base)
{   
    char *simbols = "0123456789ABCDEF";
    long nbl;
    int str[11];
    int len;
    int i;
    int pos;

    pos = 0;
    i = 0;
    nbl = nb;
    len = 0;
    if (nbl < 0)
    {
        len += write(1,"-",1);
        nbl *= -1;
    }
    while(nbl > 0)
    {   
        pos = (nbl % base);
        str[i++]=simbols[pos];
        nbl /= base;
    }
    while(i > 0)
    {
        write(1,&str[--i],1);
    }
    return (len);
}