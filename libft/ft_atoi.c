/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafa0612 <rafa0612@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:26:46 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/12/04 12:12:45 by rafa0612         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*skip_spaces(char *ptr)
{
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	return (ptr);
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	signo;

	signo = 1;
	result = 0;
	nptr = skip_spaces((char *)nptr);
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			signo = -1;
		nptr++;
	}
	while (ft_isdigit((int) *nptr))
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * signo);
}
