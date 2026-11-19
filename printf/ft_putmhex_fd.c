/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmhex_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 16:40:10 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/19 16:50:23 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_putmhex_fd(unsigned int nb, int fd)
{
	int	res;

	res = nb / 16;
	if (res < 10)
		ft_putchar_fd(res + '0', fd);
	else if (nb > 9)
		ft_putchar_fd('a' + (res - 10) - 32, fd);
	res = nb % 16;
	if (res < 10)
		ft_putchar_fd(res + '0', fd);
	else if (nb > 9)
		ft_putchar_fd('a' + (res - 10) - 32, fd);
}
// A changer en majuscule seulement 