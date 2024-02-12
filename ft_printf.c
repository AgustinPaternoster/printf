/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaterno <apaterno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:11:07 by apaterno          #+#    #+#             */
/*   Updated: 2024/02/08 12:15:13 by apaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h" 

int	ft_printf(char const *s, ...)
{
	int		i;
	va_list	vargs;
	int len;
	int check;

	i = 0;
	len =0;
	va_start (vargs, s); 
	while (s[i])
	{	
		if (s[i] == '%')
		{			
			check = ft_printop(s[i+1],vargs);	
			if (check == -1)
				return (i);
			len +=check;
			i += 2;
		}
		else 
			len += write(1,&s[i++],1);				
	}
	va_end(vargs);
	return (len);
}
