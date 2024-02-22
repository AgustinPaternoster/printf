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

int nbsize(long nb)
{
    int i;

    if (nb == 0)
        return (1);
    if (nb < 0)
        i++;
    while (nb > 0)
    {
        nb /= 10;
        i++;
    }
    return (i);
}

int	ft_itoa(long nb)
{
	int     size;
    char    *buf;

    size = nbsize(nb);
    buf = malloc(sizeof(char) * size);
    if (!buf)
        return (-1);
    if (nb < 0)
        buf[0] = "-";
    while (nb > 0)
    {
        buf[--size] = (nb % 10) + 0;
        nb /=10;
    }
}
