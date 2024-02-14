#include "printf.h"

int	ft_itoa_hex(unsigned int nb, char *simbol)
{
	int		len;
	int		i;
	char	str[25];

	len = 0;
	i = 0;
	while (nb > 0)
	{
		str[i++] = simbol[nb % 16];
		nb /= 16;
	}
	while (i > 0)
	{
		if (ft_putchar(str[--i]) == -1)
			return (-1);
		len++;
	}
	return (len);
}
