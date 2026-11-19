/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:18:34 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/19 16:47:55 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_puthex_fd(unsigned int nb, int fd)
{
	int	res;

	res = nb / 16;
	if (res < 10)
		ft_putchar_fd(res + '0', fd);
	else if (nb > 9)
		ft_putchar_fd('a' + (res - 10), fd);
	res = nb % 16;
	if (res < 10)
		ft_putchar_fd(res + '0', fd);
	else if (nb > 9)
		ft_putchar_fd('a' + (res - 10), fd);
}
