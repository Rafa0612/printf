/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:25:16 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/12/15 14:33:35 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long long ptr)
{
	int	cont;

	cont = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	cont = cont + write(1, "0x", 2);
	cont = cont + ft_print_hex(ptr, 'x');
	return (cont);
}
