/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 12:17:38 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/19 13:56:38 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "print.h"

void	ft_printf(const char *s, ...)
{
	va_list	args;
	int		fd;

	fd = 1;
	va_start(args, s);
	// petit soucis ici c'est quu'il faut que je regarde la lettre apres un %
	// du coup *s + 1 si un rencontre un % toutefois si on rencontre un % et 
	// aue la apres c'est rien de toute les lettre demander l'affiche simplement
	while (*s)
	{
		if (*s == 'c')
			ft_putchar_fd(va_arg(args, char), fd);
		else if (*s == 's')
			ft_putstr_fd(va_arg(args, char *), fd);
		else if (*s == 'd' || *s == 'i')
			ft_putnbr_fd(va_arg(args, int), fd);
		else if (*s == 'h')
			ft_puthex_fd(va_arg(args, int), fd);
		else if (*s == 'H')
			ft_putmajhex_fd(va_arg(args, int), fd);
		else
			ft_putchar(*s, fd);
		s++;
	}
}
