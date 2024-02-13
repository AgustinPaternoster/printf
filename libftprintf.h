/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaterno <apaterno@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:14:39 by apaterno          #+#    #+#             */
/*   Updated: 2024/02/13 12:59:15 by apaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H
#include <unistd.h>
#include <stdarg.h>

int ft_printf(char const *s, ...);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int ft_itoa (long nb);
int ft_itoa_hex(unsigned int nb, char t);
int	ft_tolower(int c);
int ft_ppointer(void *p);

#endif
