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

#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>
# include <stdarg.h>

# define HEX_MAY "0123456789ABCDEF"
# define HEX_MIN "0123456789abcdef"

int	ft_printf(char const *s, ...);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_itoa(long nb);
int	ft_ppointer(void *p, char *simbol);
int	ft_itoa_hex(unsigned int nb, char *simbol);

#endif
