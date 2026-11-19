/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 12:17:38 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/19 16:45:06 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

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
		if (s[i] == '%')
			if (s[i + 1] == 'c')
				ft_putchar_fd(va_arg(args, char), fd);
			else if (s[i + 1] == 's')
				ft_putstr_fd(va_arg(args, char *), fd);
			else if (s[i + 1] == 'd' || *s == 'i')
				ft_putnbr_fd(va_arg(args, int), fd);
			else if (s[i + 1] == 'h')
				ft_puthex_fd(va_arg(args, int), fd);
			else if (s[i + 1] == 'H')
				ft_putmajhex_fd(va_arg(args, int), fd);
			else
				ft_putchar(s[i], fd);
		s++;
	}
}
