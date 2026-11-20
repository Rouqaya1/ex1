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

static int	ft_conv(va_list *args, char c,  int fd)
{
	if (c == 'c')
		ft_putchar_fd((char)va_arg(*args, int), fd);
	else if (c == 's')
		ft_putstr_fd(va_arg(*args, char *), fd);
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(*args, int), fd);
	else if (c == 'u')
		ft_putunbr_fd(va_arg(*args, unsigned int), fd);
	else if (c == 'h')
		ft_puthex_fd(va_arg(*args, int), fd);
	else if (c == 'H')
		ft_putmhex_fd(va_arg(*args, int), fd);
	else if (c == 'p')
		ft_putptr_fd(va_arg(*args, void *), fd);
	else if (c == '%')
		ft_putchar_fd('%', fd);
	else
		return (0);
	return (1);
}

// petit soucis ici c'est quu'il faut que je regarde la lettre apres un %
// du coup *s + 1 si un rencontre un % toutefois si on rencontre un % et 
// aue la apres c'est rien de toute les lettre demander l'affiche simplement
void	ft_printf(const char *s, ...)
{
	va_list	args;
	int		fd;
	int		i;

	va_start(args, s);
	fd = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			if (!ft_conv(&args, s[i + 1], fd))
				ft_putchar_fd(s[i++], fd);
			else
				i += 2;
		}
		else
			ft_putchar_fd(s[i++], fd);
	}
	va_end(args);
}
