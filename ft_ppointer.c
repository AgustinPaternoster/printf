#include <libftprintf.h>

int ft_ppointer(void *p)
{
	char *simbol;
	int len;
	int check;
	unsigned long nb;

	simbol = "0123456789abcdef";
	len = 0;
	check = 0;
	nb = (unsigned long)p;	
	if (check == 0)
	{
		len += write(1,"0x",2);
		check = 1;
	}
	if (nb > 16)
		len += ft_ppointer(nb/16,t);
	len += ft_putchar(simbol[nb % 16]);
	return (len);
}
