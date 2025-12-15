/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:07:56 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/11/21 13:14:20 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*ptr_dest;
	const unsigned char		*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	if (n == 0 || src == dest)
		return (dest);
	if (dest < src)
	{
		return (ft_memcpy(ptr_dest, ptr_src, n));
	}
	else
	{
		while (n)
		{
			n--;
			ptr_dest[n] = ptr_src [n];
		}
	}
	return (dest);
}
