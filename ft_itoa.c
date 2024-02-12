#include "libftprintf.h"

int ft_itoa (long nb)
{
	int len;

	len = 0;
	if (nb < 0)
	{	
		len += ft_putchar('-');
		nb *= -1;
	}	
	if(nb > 10)
		len += ft_itoa(nb/10);
	len += ft_putchar((nb % 10) + 48);
	return (len);
}
