/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:19:08 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/12/11 14:11:34 by rpena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len = len + ft_formats(args, s[i + 1]);
			i++;
		}
		else
			len = len + ft_print_char(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}

/*int main()
{
	int print;
	int printft;
	int nmbr = -325;
	char *s = "Mundo";
	void *st;

	printf ("------------------Prueba Cadenas---------------------------\n");
	print = printf("[Hola %s] \n", s);
	printft = ft_printf("[Hola %s] \n", s);
	printf("Resultado original cadena: %d || Resultado ft cadena: %d \n", print, printft);
	printf ("------------------Prueba Punteros---------------------------\n");
	printf("%p \n", st);
	printf ("------------------Prueba Enteros---------------------------\n");
	printft = ft_printf("El numero a mostrar es: %i \n", nmbr);
	print = printf("El numero a mostrar es: %i \n", nmbr);
	printf("Resultado original cadena: %d || Resultado ft cadena: %d \n", print, printft);
	return 0;
}*/
