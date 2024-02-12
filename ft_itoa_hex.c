#include "libftprintf.h"

int ft_itoa_hex(unsigned int nb, char t)
{
	char *simbol;
	int len;
	int pos;

	simbol = "0123456789ABCDEF";
	len = 0;
	if (nb > 16)
		len += ft_itoa_hex(nb/16,t);
	pos = nb % 16;
   	if ( t == 'X')	
		len += ft_putchar(simbol[pos]);
	else
		len += ft_putchar(ft_tolower(simbol[pos]));
	return (len);
}
