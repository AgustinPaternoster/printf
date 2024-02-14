/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaterno <apaterno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:11:07 by apaterno          #+#    #+#             */
/*   Updated: 2024/02/13 13:00:01 by apaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h" 

int	ft_printop(char o, va_list vargs)
{
	int	len;

	len = 0;
	if (o == 's')
		len = ft_putstr(va_arg(vargs, char *));
	else if (o == 'c')
		len = ft_putchar(va_arg(vargs, int));
	else if (o == 'p')
		len = ft_ppointer(va_arg(vargs, void *), HEX_MIN);
	else if (o == 'd')
		len = ft_itoa(va_arg(vargs, int));
	else if (o == 'i')
		len = ft_itoa(va_arg(vargs, int));
	else if (o == 'u')
		len = ft_itoa(va_arg(vargs, unsigned int));
	else if (o == 'x')
		len = ft_itoa_hex(va_arg(vargs, unsigned int), HEX_MIN);
	else if (o == 'X')
		len = ft_itoa_hex(va_arg(vargs, unsigned int), HEX_MAY);
	else if (o == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_printf(char const *s, ...)
{
	int		i;
	va_list	vargs;
	int		len;

	i = 0;
	len = 0;
	va_start(vargs, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			len += ft_printop(s[i], vargs);
			i++;
		}
		else
			len += write(1, &s[i++], 1);
	}
	va_end(vargs);
	return (len);
}
