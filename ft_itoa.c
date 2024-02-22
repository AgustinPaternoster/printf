/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaterno <apaterno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:05:20 by apaterno          #+#    #+#             */
/*   Updated: 2024/02/15 13:44:50 by apaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itoa(long nb)
{
	int		len;
	char	str[11];
	int		i;

	i = 0;
	len = 0;
	if (nb == 0)
		return (ft_putchar('0'));
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
	{
		if (ft_putchar(str[--i]) == -1)
			return (-1);
		len++;
	}
	return (len);
}
