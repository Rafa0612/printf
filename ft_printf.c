/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:19:08 by rpena-ro          #+#    #+#             */
/*   Updated: 2025/12/12 15:14:50 by rpena-ro         ###   ########.fr       */
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
	int nmbr2 = 42;
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
	printf ("------------------Prueba Unsigned---------------------------\n");
	print = printf("(-325) != %u \n", nmbr);
	printft = ft_printf("(-325) != %u \n", nmbr);
	printf("Resultado original cadena: %d || Resultado ft cadena: %d \n", print, printft);
	print = printf("(42) == %u \n", nmbr2);
	printft = ft_printf("(42) == %u \n", nmbr2);
	printf("Resultado original cadena: %d || Resultado ft cadena: %d \n", print, printft);
	printf ("------------------Prueba Porcentaje---------------------------\n");
	printft = ft_printf("Resultado a mostrar : %% \n");
	print = printf("Resultado a mostrar : %% \n");
	printf("Resultado original cadena: %d || Resultado ft cadena: %d \n", print, printft);
	printf ("------------------Prueba Hexadecimal---------------------------\n");
	printft = ft_printf("(455X) : %X \n", 455);
	print = printf("(455X) : %X \n", 455);
	printf("Resultado original cadena: %d || Resultado ft cadena: %d \n", print, printft);
	printft = ft_printf("(-15x) : %x \n", -15);
	print = printf("(-15x) : %x \n", -15);
	printf("Resultado original cadena: %d || Resultado ft cadena: %d \n", print, printft);
	return 0;
}*/
