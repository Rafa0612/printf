/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:26:00 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/12/11 16:31:31 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(int a)
{
	char	*buffer;
	int		cont;

	buffer = "0123456789abcdef";
	cont = 0;
	if (a < 16)
	{
		cont = cont + ft_print_char(buffer[a % 16]);
	}
}
