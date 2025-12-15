/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:26:00 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/12/15 15:43:34 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long long a, const char format)
{
	char	*buffer;
	int		cont;

	if (format == 'x')
		buffer = "0123456789abcdef";
	else
		buffer = "0123456789ABCDEF";
	cont = 0;
	if (a >= 16)
		cont = cont + ft_print_hex(a / 16, format);
	cont = cont + ft_print_char(buffer[a % 16]);
	return (cont);
}
