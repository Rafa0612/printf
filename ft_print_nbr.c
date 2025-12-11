/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:39:41 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/12/11 14:00:10 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int a)
{
	int	cont;

	cont = 0;
	if (a == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (a < 0)
	{
		write(1, "-", 1);
		cont++;
		a = -a;
	}
	if (a > 9)
		cont = cont + ft_print_nbr(a / 10);
	cont = cont + ft_print_char(a % 10 + '0');
	return (cont);
}
