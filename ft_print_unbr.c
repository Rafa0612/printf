/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:59:54 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/12/11 16:18:44 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unbr(unsigned int a)
{
	int	cont;

	cont = 0;
	if (a > 9)
		cont = cont + ft_print_unbr(a / 10);
	cont = cont + ft_print_char(a % 10 + '0');
	return (cont);
}
