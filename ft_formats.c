/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:23:17 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/12/15 14:45:38 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = len + ft_print_char(va_arg(args, int));
	if (format == 's')
		len = len + ft_print_str(va_arg(args, char *));
	if (format == 'd' || format == 'i')
		len = len + ft_print_nbr((va_arg(args, int)));
	if (format == 'u')
		len = len + ft_print_unbr(va_arg(args, int));
	if (format == '%')
		len = len + ft_print_perc();
	if (format == 'x' || format == 'X')
		len = len + ft_print_hex(va_arg(args, unsigned int), format);
	if (format == 'p')
		len = len + ft_print_ptr(va_arg(args, long));
	return (len);
}
