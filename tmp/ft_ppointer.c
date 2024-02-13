#include "libftprintf.h"

int ft_ppointer(size_t p,int t)
{
	char *simbol;
	int len;
	long long nb;
	int check;

	simbol = "0123456789abcdef";
	len = 0;
	check = t;
	nb = p;	
	if (check == 0)
	{
		len += write(1,"0x",2);
		check = 1;
	}
	if (nb >= 16)
		len += ft_ppointer(nb/16,check);
	len += ft_putchar(simbol[nb % 16]);
	return (len);
}
