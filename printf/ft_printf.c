/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 12:17:38 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/20 16:43:13 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// IL FAUT MOFIFIER LES COUNT ET METTRE UN RETURN A LA PLACE ASKIP ET LAISSER SEULEMENT 
// LE IF DU PRINT PCK LA J'ADDITIONNE DOULEMENT 
static int	ft_conv(va_list *args, char c,  int fd)
{
	if (c == 'c')
		return (ft_putchar_fd((char)va_arg(*args, int), fd));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(*args, char *), fd));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(*args, int), fd));
	else if (c == 'u')
		return (ft_putunbr_fd(va_arg(*args, unsigned int), fd));
	else if (c == 'h')
		return (ft_puthex_fd(va_arg(*args, int), fd));
	else if (c == 'H')
		return (ft_putmhex_fd(va_arg(*args, int), fd));
	else if (c == 'p')
		return (ft_putptr_fd(va_arg(*args, void *), fd));
	else if (c == '%')
		return (ft_putchar_fd('%', fd));
	else
		return (0);
}

// petit soucis ici c'est quu'il faut que je regarde la lettre apres un %
// du coup *s + 1 si un rencontre un % toutefois si on rencontre un % et 
// aue la apres c'est rien de toute les lettre demander l'affiche simplement
int ft_printf(const char *format, ...)
{
	va_list	args;
	int		fd;
	int		count;
	int		i;

	va_start(args, format);
	fd = 1;
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			if (ft_conv(&args, format[i + 1], fd))
			{
				count += ft_putchar_fd(format[i++], fd);
				i += 2;
			}
			else
				count += ft_putchar_fd(format[i++], fd);
		}
		else
			count += ft_putchar_fd(format[i++], fd);
	}
	va_end(args);
	return (count);
}
