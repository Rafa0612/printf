/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:58:24 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/12/15 15:49:51 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_formats(va_list args, const char format);
int	ft_print_char(int c);
int	ft_print_str(const char *s);
int	ft_print_nbr(int a);
int	ft_print_unbr(unsigned int a);
int	ft_print_perc(void);
int	ft_print_hex(unsigned long long a, const char format);
int	ft_print_ptr(unsigned long long ptr);

#endif