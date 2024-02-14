#include "printf.h"

int	ft_itoa(long nb)
{
	int		len;
	char	str[11];
	int		i;

	i = 0;
	len = 0;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	while (nb > 0)
	{
		str[i++] = (nb % 10) + 48;
		nb /= 10;
	}
	while (i > 0)
		len += ft_putchar(str[--i]);
	return (len);
}
