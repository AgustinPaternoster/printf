#include "libftprintf.h"
#include <stdio.h>

int ft_ppointer(void *p, char *simbol)
{
	unsigned long nb;
	int len;
	int i;
	char str[25];

	nb = (unsigned long)p;
	len = 0;
	i = 0;
	len += write(1,"0x",2);
	while (nb > 0)
	{
		str[i++] = simbol[nb % 16];
		nb /= 16;
	}
	while (i > 0)
	{
		if (ft_putchar(str[--i]) == -1)
			return -1;
		len++;
	}
	return (len);
}
